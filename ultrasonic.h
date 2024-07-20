/*****************************************************************************************************************************
**********************************    Author  : Ehab Magdy Abdullah                      *************************************
**********************************    Linkedin: https://www.linkedin.com/in/ehabmagdyy/  *************************************
**********************************    Youtube : https://www.youtube.com/@EhabMagdyy      *************************************
******************************************************************************************************************************/


#ifndef ULTRASONICSENSOR_ULTRASONIC_H_
#define ULTRASONICSENSOR_ULTRASONIC_H_

#include "stm32f4xx_hal.h"

#define ULTRASONUC_TRIGGER_PORT			GPIOA
#define ULTRASONIC_TRIGGER_PIN  		GPIO_PIN_1
#define ULTRASONIC_ECHO_PIN_IC  		&htim2          // GPIO_PIN_0

void Ultrasonic_Get_Distance(void);

#endif /* ULTRASONICSENSOR_ULTRASONIC_H_ */
