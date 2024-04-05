/*****************************************************************************************
 ****************** @file           : ultrasonic.h		              ********************
 ****************** @author         : Ehab Magdy Abdallah             ********************
 ****************** @brief          : interface Ultrasonic Driver     ********************
******************************************************************************************/


#ifndef ULTRASONICSENSOR_ULTRASONIC_H_
#define ULTRASONICSENSOR_ULTRASONIC_H_

#include "stm32f4xx_hal.h"

#define ULTRASONUC_TRIGGER_PORT			GPIOA
#define ULTRASONIC_TRIGGER_PIN  		GPIO_PIN_1
#define ULTRASONIC_ECHO_PIN_IC  		&htim2

void Ultrasonic_Get_Distance(void);

#endif /* ULTRASONICSENSOR_ULTRASONIC_H_ */
