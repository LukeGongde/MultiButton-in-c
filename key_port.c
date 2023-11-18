
/*
 * @file button_port.c
 * Author: Gong
 * Email: gongdewang@yaming-lighting.com
 * Description: source_file_description
 */

/* Include Files */
#include "key.h"
/* Defines */

/* Function Declarations */

/* Type Definitions */

/* Function Definitions */
UINT8 read_button_GPIO(USER_BUTTON_T button_id)
{
	// you can share the GPIO read function with multiple Buttons
	switch(button_id)
	{
		case USER_BUTTON_1:
			return HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin);
			break;
		case USER_BUTTON_2:
			return HAL_GPIO_ReadPin(KEY2_GPIO_Port, KEY2_Pin);
			break;
		default:
			return 0;
			break;
	}
}
