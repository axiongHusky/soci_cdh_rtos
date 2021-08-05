#include <stdbool.h>
#include "com_wrap.h"
#include "com_task.h"
#include "clock_config.h"
#include "timers.h"
#include "peripherals.h"

//flags to check if there's data to send
//cdh receives these data and sends the data to radio which to
bool command_request = false;
bool payload_check = false;
bool image_check = false;
bool beacon_check = false;

TaskHandle_t TaskHandler_com;
extern TaskHandle_t TaskHandler_img;
extern bool i2c_com_antennaDeployed;

/*UART 1
  Ring buffer for data input and output, input data are saved
  to ring buffer in IRQ handler. The main function polls the ring buffer status,
  if there is new data, then send them out.
  Ring buffer full: (((rxIndex + 1) % DEMO_RING_BUFFER_SIZE) == txIndex)
  Ring buffer empty: (rxIndex == txIndex)
*/
uint8_t UART1RingBuffer[UART1_RING_BUFFER_SIZE];
volatile uint16_t txIndex; /* Index of the data to send out. */
volatile uint16_t rxIndex; /* Index of the memory to save new arrived data. */
volatile uint16_t addr;
uint8_t g_tipString[] =
    "UART 1 initialised \r\n";

// TODO: Add a struct for messages between tasks. Try restructuring com code

//Program the expected responses for each command
static char set_dealer_response[] = {0x01, 0xC4, 0x00, 0x3B};
static char set_power_response[] = {0x01, 0xF1, 0x00, 0x0F};
static char get_power_response[] = {0x01, 0xF2, 0x01, 0x0D};
static char set_tx_freq_response[] = {0x01, 0xB7, 0x00};
static char set_rx_freq_response[] = {0x01, 0xB9, 0x00};
static char set_channel_response[] = {0x01, 0x83, 0x00, 0x7C};
static char set_bandwidth_response[] = {0x01, 0xF0, 0x00, 0x10};
static char set_modulation_response[] = {0x01, 0xAB}; //TBD
static char program_response[] = {0x01,0x9E, 0x00, 0x62};
static char reset_response[] = {0x01, 0x9D, 0x00, 0x63};
static char set_led_rx_response[] = {0x01, 0x00, 0xFF, 0x01};

void UART1_IRQHandler(void)
{
	BaseType_t xHigherPriorityTaskWoken;
    uint8_t data;
    uint16_t tmprxIndex = rxIndex;
    uint16_t tmptxIndex = txIndex;

    message_package new_message;

    /* If new data arrived. */
    bool new_data_flag = (kLPUART_RxDataRegFullFlag)&LPUART_GetStatusFlags(LPUART_1);
    if (new_data_flag)
    {
        data = LPUART_ReadByte(LPUART_1);

        /* If ring buffer is not full, add data to ring buffer. */
        if (((tmprxIndex + 1) % UART1_RING_BUFFER_SIZE) != tmptxIndex)
        {
        	UART1RingBuffer[rxIndex] = data;
        	PRINTF("data: %d", data);
            rxIndex++;
            rxIndex %= UART1_RING_BUFFER_SIZE;
        }
    }
    new_message.message_source = FROM_COM;
    //new_message.message_type = ; // TODO: How to tell command vs data? Do I need ths var?
    new_message.message_addr = addr; // TODO: Make sure counter addr for this actually works
    new_message.message_data = &data;
    new_message.message_size = rxIndex + 1; //TODO: Make sure this is getting actual size
    xQueueSendToBackFromISR(com_task_queue_handle, &new_message, &xHigherPriorityTaskWoken );
    SDK_ISR_EXIT_BARRIER;
    // TODO: Make sure it only gets here (after exit barrier) once entire data is received
    // TODO: Make sure this interrupt handler isn't too long!! Is exit barrier .. exit the interrupt handler?

    message_package rcv_msg;
    if (xQueueReceiveFromISR(com_task_queue_handle, (void *)&rcv_msg, 0) == pdTRUE) {
    	com_proccess_received_data(rcv_msg.message_data, rcv_msg.message_size);
    }
}

/* TODO: Need to move this handling to wrapper function and implemenet some sort of
    task suspend system from com_wrap and task notify from ISR. But we want to make sure
    that we're not waiting too long. So it might be better to just have a
    task notification function that resumes (but what would wrapper do in meantimr)*/
com_proccess_received_data(uint8_t* p_data, int message_size){
	addr++;
	if(checkConfigCommand((*p_data), *set_dealer_response, message_size)) {
		PRINTF("SET DEALER RESPONSE SUCCESFULLY SET");
		//rec_return_val = 1;
	}

		/* TODO: Maybe make some global variable that's set here and affects whether something is successful,
		         maybe just a boolean dealer_response_success that's set to true here */
	}
	else if(checkConfigCommand((*p_data), *set_power_response, message_size)){
	}
	else if(checkConfigCommand((*p_data), *set_tx_freq_response, message_size)){
	}
	else if(checkConfigCommand((*p_data), *set_rx_freq_response, message_size)){
	}
	else if(checkConfigCommand((*p_data), *set_channel_response, message_size)){
	}
	else if(checkConfigCommand((*p_data), *set_bandwidth_response, message_size)){
	}
	else if(checkConfigCommand((*p_data), *set_modulation_response, message_size)){
	}
	else if(checkConfigCommand((*p_data), *program_response, message_size)){
	}
	else if(checkConfigCommand((*p_data), *reset_response, message_size)){
	}
	else if(checkConfigCommand((*p_data), *set_led_rx_response, message_size)){
	}
    // TODO: What kind of ack are we expecting to receive before receiving uplinking commands?
//	else if{
//	}
	else{
		//TODO: Set "default_tries" in com_wrap to false or something so it tries sending prev message again?
	}

}


void com_task(void *pvParameters)
{
	const TickType_t xDelayms = pdMS_TO_TICKS( 500 ); //delay 500 ms
	TickType_t xLastWakeTime = xTaskGetTickCount(); // gets the last wake time

	/*initiate UART 1*/
    lpuart_config_t config;
    uint16_t tmprxIndex = rxIndex;
    uint16_t tmptxIndex = txIndex;

    LPUART_GetDefaultConfig(&config);
    config.baudRate_Bps = BOARD_DEBUG_UART_BAUDRATE;
    config.enableTx     = true;
    config.enableRx     = true;

    LPUART_Init(LPUART_1, &config, LPUART1_CLK_FREQ);

    /* Send g_tipString out. */
    if(kStatus_Success == LPUART_WriteBlocking(LPUART_1, g_tipString, sizeof(g_tipString) / sizeof(g_tipString[0]))) {
    	PRINTF("UART1 succeed write blocking\r\n");
	} else {
		PRINTF("UART1 failed write blocking\r\n");
	}

    /* Enable RX interrupt. */
    LPUART_EnableInterrupts(LPUART_1, kLPUART_RxDataRegFullInterruptEnable);
    EnableIRQ(UART1_IRQn);

    /*UART 1 initialisation done */

#if COM_ENABLE
	PRINTF("\ninitialize comm.\r\n");
	com_init();

	/***deploy antenna****/
	//TODO: should we make this whole sequence of deployment into a function?
	com_deployAntenna_algorithmOne(); //TODO: uncomment this line when incorporating the newer com wrapper
	//TODO: should we wait for 15 min and check if we need to try, if we do vTaskDelay, then we were able to switch to other tasks in the meantime
//	i2c_com_antennaDeployed = com_i2c_checkDeploy(); //it might be easier to just update the global flag in the checkDeploy //TODO: uncomment this line when incorporating the newer com wrapper
	if (!i2c_com_antennaDeployed) {
		com_deployAntenna_algorithmTwo(); //TODO: uncomment this line when incorporating the newer com wrapper
	}
	//TODO: should we wait for 15 min and check if we need to try
	i2c_com_antennaDeployed = com_i2c_checkDeploy(); //TODO: uncomment this line when incorporating the newer com wrapper
	if (!i2c_com_antennaDeployed) {
		com_set_burn_wire1();
	}
	//TODO: should we wait for 15 min and check if we need to try, by vTaskDelay? or by delay() in com wrapper
//	i2c_com_antennaDeployed = com_i2c_checkDeploy(); //TODO: uncomment this line when incorporating the newer com wrapper
	if (!i2c_com_antennaDeployed) {
		com_set_burn_wire2();
	}
	/****end of deployment of antenna****/
#endif
	for (;;) {
		xLastWakeTime = xTaskGetTickCount();
#if COM_ENABLE
		com_getCommands(); //TODO: getCommands should raise the flag command_request if n>0 and decode what commands we have (raise those check flags for each type of data).
		if (command_request){
			//sending data based on priority
			if (payload_check) {
				com_sendPayloads();
			} else if (image_check) {
				PRINTF("resuming img task\r\n");
				vTaskResume(TaskHandler_img);
				com_sendImages();
			}
		}
		//always send beacons when COM is active
		//TODO: but it looks like xLastWakeTime is updated every for loop. That means the above process should take longer than 60 sec, if not, then we will never send beacons.
		if(xTaskGetTickCount() - xLastWakeTime >= 60*1000){ //check if 60 secs have passed
			com_sendBeacons();
		}
		vTaskDelayUntil(&xLastWakeTime, xDelayms);
	}
#else
		vTaskDelayUntil(&xLastWakeTime, xDelayms);
	}
#endif
}
