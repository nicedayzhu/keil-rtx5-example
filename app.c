#include <stdio.h>

#include "main.h"
#include "RTE_Components.h"             /* Component selection */
#include "stm32f4xx_hal.h"              // Keil::Device:STM32Cube HAL:Common

void ledg_t (void *argument) 
{
	while (1) 
	{ 
		HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin); // LED_G иак╦
		HAL_Delay(500);
	}
}
void ledr_t (void *argument) {
	while (1) 
	{ 
		HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin); // LED_R иак╦
		HAL_Delay(250);
	}
}
void app_main (void *argument) 
{
	osThreadNew(ledg_t, NULL, NULL); // Create a new thread
	osThreadNew(ledr_t, NULL, NULL); // Create a new thread
	for (;;) {}
}
