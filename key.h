/*
 * key.h
 *
 *  Created on: Nov 18, 2023
 *      Author: gongdewang
 */

#ifndef INC_KEY_H_
#define INC_KEY_H_

/* Include Files */
#include "types.h"
#ifdef __cplusplus
extern "C" {
#endif

/* Defines */

/* Type Definitions */
typedef enum
{
    USER_BUTTON_0 = 0, // 对应 IoT Board 开发板的 PIN_KEY0
    USER_BUTTON_1,     // 对应 IoT Board 开发板的 PIN_KEY1
    USER_BUTTON_2,     // 对应 IoT Board 开发板的 PIN_KEY2
    USER_BUTTON_3,     // 对应 IoT Board 开发板的 PIN_WK_UP
    USER_BUTTON_MAX
} USER_BUTTON_T;

/* Function Declarations */
UINT8 read_button_GPIO(USER_BUTTON_T button_id)
OPERATE_RET key_init();
#ifdef __cplusplus
}
#endif




#endif /* INC_KEY_H_ */
