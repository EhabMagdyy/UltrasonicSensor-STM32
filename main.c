/*****************************************************************************************************************************
**********************************    Author  : Ehab Magdy Abdullah                      *************************************
**********************************    Linkedin: https://www.linkedin.com/in/ehabmagdyy/  *************************************
**********************************    Youtube : https://www.youtube.com/@EhabMagdyy      *************************************
******************************************************************************************************************************/

/*********************************  Copy This those sections in your code   ************************************/

/* USER CODE BEGIN Includes */
#include "ultrasonic.h"
/* USER CODE END Includes */

/* USER CODE BEGIN PV */
uint16_t distance;
uint8_t isReadingFinished = 0;
/* USER CODE END PV */

int main(void)
{
  /* USER CODE BEGIN 2 */
  HAL_TIM_IC_Start_IT(&htim2, TIM_CHANNEL_1);
  Ultrasonic_Get_Distance();
  HAL_Delay(20);
  /* USER CODE END 2 */

  /* USER CODE BEGIN WHILE */
  while (1)
  {
    if (isReadingFinished)
    {
      isReadingFinished = 0;
      // if(distance < 10 && distance > 0)
      //   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
      // else
      //   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
      HAL_Delay(20);
      Ultrasonic_Get_Distance();
    }
    /* USER CODE END WHILE */
  }
}