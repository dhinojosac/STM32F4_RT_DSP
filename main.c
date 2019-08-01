#include "stm32f4xx_hal.h"              // Keil::Device:STM32Cube HAL:Common
#include "arm_math.h"                   // ARM::CMSIS:DSP

// Functions declarations
extern void SystemClock_Config(void);
extern void Error_Handler(void);

uint32_t freq;

int main(void)
{
	
	HAL_Init();
	SystemClock_Config();
	
	freq = HAL_RCC_GetHCLKFreq();
	while(1)
	{
		
	}
}


void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}

