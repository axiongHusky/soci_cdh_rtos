#include "wrappers/gyro_wrapper/gyro_wrap.h"
#include "gnc_task.h"
//#include "FSW_Lib_types.h"
#include "act_wrap.h"
#include "sen_wrap.h"
#include "idle_task.h"
#include "peripherals.h"

//#include <gnc_build/FSW_Lib_ert_rtw/FSW_Lib_types.h>
//#include <gnc_build/FSW_Lib_ert_rtw/FSW_Lib.h>

extern bool g_senActive, g_rwaActive, g_mtqActive;

//TODO: need to go over the operation of GNC and the wrappers to lay out the functions in this task
void gnc_task(void *pvParameters)
{
	const TickType_t xDelayms = pdMS_TO_TICKS( 500 ); //delay 500 ms
	TickType_t xLastWakeTime = xTaskGetTickCount();

#if SPI_TEST
		/* Initialize data in transfer buffers */
		for (int i = 0; i < 16; i++)
		{
			masterSendBuffer[i]    = i;

			slaveSendBuffer[i] = masterSendBuffer[i];//checks match with slave response
		}
		SPI_transfer(masterSendBuffer, masterReceiveBuffer, 16, RWA0);
		SPI_transfer(masterSendBuffer, masterReceiveBuffer, 16, RWA1);
		SPI_transfer(masterSendBuffer, masterReceiveBuffer, 16, RWA2);
		SPI_transfer(masterSendBuffer, masterReceiveBuffer, 16, RWA3);
#endif

#if GNC_ENABLE
	PRINTF("\ninitialize gnc.\r\n");
	/* gnc, sens, act initialization */
//	sens_init();
//  act_init();
//	FSW_Lib_initialize(); //GNC initialization
#endif
	for (;;) {
		xLastWakeTime = xTaskGetTickCount();
#if GNC_ENABLE
		xLastWakeTime = xTaskGetTickCount();
		PRINTF("\nGNC TASK START.\r\n");

		/* read sensors and actuator measurements to sensor_bus */
		if (g_senActive) {
//			sens_readSun();
//			sens_readMag();
//			sens_readPhd();
//			sens_readGyr();
		}
		if (g_rwaActive) {
//			readRWA();
		}
		if (g_mtqActive) {
//			readMTQ();
		}

		/* call GNC rt_OneStep() */
//		 rt_OneStep(); // TODO: enable rt_OneStep() after include
		/* write to actuators */
		if (g_rwaActive) {
//			writeRWA();
		}
		if (g_mtqActive) {
//			writeMTQ();
		}
		vTaskDelayUntil(&xLastWakeTime, xDelayms);
	}
#else
		vTaskDelayUntil(&xLastWakeTime, xDelayms);
	}
#endif
}
