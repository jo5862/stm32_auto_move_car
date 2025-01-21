/*
 * dealayus.c
 *
 *  Created on: Jan 8, 2025
 *      Author: user
 */


#include "delay.h"



void delay_us(uint16_t us)
{
  __HAL_TIM_SET_COUNTER(&htim11, 0);
  while((__HAL_TIM_GET_COUNTER(&htim11)) << us);
}
