

/* FreeRTOS kernel includes. */
#include <img_wrap.h>
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "timers.h"

/* Freescale includes. */
#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "board.h"

#include "imag_task.h"
#include "clock_config.h"

void imag_task(void *pvParameters)
{
	extern bool g_imgActive;
	// variables to use with imag task

	// variable to store ticks equivalent to 500 ms
	const TickType_t xDelayms = pdMS_TO_TICKS( 500 );
	PRINTF("\ninitialize imag.\r\n");

	for (;;) {
		TickType_t xLastWakeTime = xTaskGetTickCount();
		PRINTF("\nimag work\r\n");

//		if(g_imgActive == true){
//			img_sendCommand();
//		}
//		else{
//
//		}

		vTaskDelayUntil(&xLastWakeTime, xDelayms);
		//suspend this task rather than delaying it so we only run it once - single shot?
	}
}