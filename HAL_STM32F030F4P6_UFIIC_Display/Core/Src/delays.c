/*
 * delays.c
 *
 *  Created on: Jul 10, 2020
 *      Author: Wojtek
 */


#include "main.h"
#include "stm32f0xx_hal.h"
#include "tim.h"

#include "delays.h"

void Delay_us(uint16_t us)
{
	htim14.Instance->CNT = 0;
	while(htim14.Instance->CNT <= us);
}
