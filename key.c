/*
 * key.c
 *
 *  Created on: Nov 18, 2023
 *      Author: gongdewang
 */


/* Include Files */
#include <key.h>
#include "multi_button.h"
#include "macros.h"
#include "main.h"
#include "usart.h"
/* Defines */
#ifndef LOG
#define LOG(format, ...) LOG_DEBUG(format, ##__VA_ARGS__)
#endif

#define BUTTON_1
#define BUTTON_2
#define BUTTON_3
#define BUTTON_4
/* Function Declarations */
#ifdef BUTTON_1
void btn1_press_down_handler(void* btn);
void btn1_press_up_handler(void* btn);
void btn1_press_repeat_handler(void* btn);
void btn1_single_click_handler(void* btn);
void btn1_double_click_handler(void* btn);
void btn1_long_press_start_handler(void* btn);
void btn1_long_press_hold_handler(void* btn);
#endif
#ifdef BUTTON_2
void btn2_press_down_handler(void* btn);
void btn2_press_up_handler(void* btn);
void btn2_press_repeat_handler(void* btn);
void btn2_single_click_handler(void* btn);
void btn2_double_click_handler(void* btn);
void btn2_long_press_start_handler(void* btn);
void btn2_long_press_hold_handler(void* btn);
#endif
#ifdef BUTTON_3
void btn3_press_down_handler(void* btn);
void btn3_press_up_handler(void* btn);
void btn3_press_repeat_handler(void* btn);
void btn3_single_click_handler(void* btn);
void btn3_double_click_handler(void* btn);
void btn3_long_press_start_handler(void* btn);
void btn3_long_press_hold_handler(void* btn);
#endif
#ifdef BUTTON_4
void btn4_press_down_handler(void* btn);
void btn4_press_up_handler(void* btn);
void btn4_press_repeat_handler(void* btn);
void btn4_single_click_handler(void* btn);
void btn4_double_click_handler(void* btn);
void btn4_long_press_start_handler(void* btn);
void btn4_long_press_hold_handler(void* btn);
#endif

/* Type Definitions */
Button btn1;
Button btn2;
Button btn3;
Button btn4;

/* Function Definitions */
// port

OPERATE_RET key_init(){
	OPERATE_RET ret = OPRT_OK;
#ifdef BUTTON_1
    
	button_init(&btn1, read_button_GPIO, 1, USER_BUTTON_1);
	button_attach(&btn1, PRESS_DOWN,       btn1_press_down_handler);
	button_attach(&btn1, PRESS_UP,         btn1_press_up_handler);
	button_attach(&btn1, PRESS_REPEAT,     btn1_press_repeat_handler);
	button_attach(&btn1, SINGLE_CLICK,     btn1_single_click_handler);
	button_attach(&btn1, DOUBLE_CLICK,     btn1_double_click_handler);
	button_attach(&btn1, LONG_PRESS_START, btn1_long_press_start_handler);
	button_attach(&btn1, LONG_PRESS_HOLD,  btn1_long_press_hold_handler);
	button_start(&btn1);
#endif
#ifdef BUTTON_2
    button_init(&btn2, read_button_GPIO, 1, USER_BUTTON_2);
    button_attach(&btn2, PRESS_DOWN,       btn2_press_down_handler);
    button_attach(&btn2, PRESS_UP,         btn2_press_up_handler);
    button_attach(&btn2, PRESS_REPEAT,     btn2_press_repeat_handler);
    button_attach(&btn2, SINGLE_CLICK,     btn2_single_click_handler);
    button_attach(&btn2, DOUBLE_CLICK,     btn2_double_click_handler);
    button_attach(&btn2, LONG_PRESS_START, btn2_long_press_start_handler);
    button_attach(&btn2, LONG_PRESS_HOLD,  btn2_long_press_hold_handler);
    button_start(&btn2);
#endif
#ifdef BUTTON_3
    button_init(&btn3, read_button_GPIO, 1, USER_BUTTON_3);
    button_attach(&btn3, PRESS_DOWN,       btn3_press_down_handler);
    button_attach(&btn3, PRESS_UP,         btn3_press_up_handler);
    button_attach(&btn3, PRESS_REPEAT,     btn3_press_repeat_handler);
    button_attach(&btn3, SINGLE_CLICK,     btn3_single_click_handler);
    button_attach(&btn3, DOUBLE_CLICK,     btn3_double_click_handler);
    button_attach(&btn3, LONG_PRESS_START, btn3_long_press_start_handler);
    button_attach(&btn3, LONG_PRESS_HOLD,  btn3_long_press_hold_handler);
    button_start(&btn3);
#endif
#ifdef BUTTON_4
    button_init(&btn4, read_button_GPIO, 1, USER_BUTTON_4);
    button_attach(&btn4, PRESS_DOWN,       btn4_press_down_handler);
    button_attach(&btn4, PRESS_UP,         btn4_press_up_handler);
    button_attach(&btn4, PRESS_REPEAT,     btn4_press_repeat_handler);
    button_attach(&btn4, SINGLE_CLICK,     btn4_single_click_handler);
    button_attach(&btn4, DOUBLE_CLICK,     btn4_double_click_handler);
    button_attach(&btn4, LONG_PRESS_START, btn4_long_press_start_handler);
    button_attach(&btn4, LONG_PRESS_HOLD,  btn4_long_press_hold_handler);
    button_start(&btn4);
#endif

	return ret;

}


#ifdef BUTTON_1
__weak void btn1_press_down_handler(void* btn)
{
	//do something...
	LOG("BTN is pressed");
}

__weak void btn1_press_up_handler(void* btn)
{
	//do something...
	LOG("BTN is release");
}

__weak void btn1_press_repeat_handler(void* btn)
{
    //do something...
    LOG("BTN is repeat");
}

__weak void btn1_single_click_handler(void* btn)
{
    //do something...
    LOG("BTN is single click");
}

__weak void btn1_double_click_handler(void* btn)
{
    //do something...
    LOG("BTN is double click");
}

__weak void btn1_long_press_start_handler(void* btn)
{
    //do something...
    LOG("BTN is long press start");
}

__weak void btn1_long_press_hold_handler(void* btn)
{
    //do something...
    LOG("BTN is long press hold");
}

#endif


#ifdef BUTTON_2
__weak void btn2_press_down_handler(void* btn)
{
	//do something...
	LOG("BTN is pressed");
}

__weak void btn2_press_up_handler(void* btn)
{
	//do something...
	LOG("BTN is release");
}

__weak void btn2_press_repeat_handler(void* btn)
{
    //do something...
    LOG("BTN is repeat");
}

__weak void btn2_single_click_handler(void* btn)
{
    //do something...
    LOG("BTN is single click");
}

__weak void btn2_double_click_handler(void* btn)
{
    //do something...
    LOG("BTN is double click");
}

__weak void btn2_long_press_start_handler(void* btn)
{
    //do something...
    LOG("BTN is long press start");
}

__weak void btn2_long_press_hold_handler(void* btn)
{
    //do something...
    LOG("BTN is long press hold");
}

#endif
#ifdef BUTTON_3
__weak void btn3_press_down_handler(void* btn)
{
	//do something...
	LOG("BTN is pressed");
}

__weak void btn3_press_up_handler(void* btn)
{
	//do something...
	LOG("BTN is release");
}

__weak void btn3_press_repeat_handler(void* btn)
{
    //do something...
    LOG("BTN is repeat");
}

__weak void btn3_single_click_handler(void* btn)
{
    //do something...
    LOG("BTN is single click");
}

__weak void btn3_double_click_handler(void* btn)
{
    //do something...
    LOG("BTN is double click");
}

__weak void btn3_long_press_start_handler(void* btn)
{
    //do something...
    LOG("BTN is long press start");
}

__weak void btn3_long_press_hold_handler(void* btn)
{
    //do something...
    LOG("BTN is long press hold");
}

#endif
#ifdef BUTTON_4
__weak void btn4_press_down_handler(void* btn)
{
	//do something...
	LOG("BTN is pressed");
}

__weak void btn4_press_up_handler(void* btn)
{
	//do something...
	LOG("BTN is release");
}

__weak void btn4_press_repeat_handler(void* btn)
{
    //do something...
    LOG("BTN is repeat");
}

__weak void btn4_single_click_handler(void* btn)
{
    //do something...
    LOG("BTN is single click");
}

__weak void btn4_double_click_handler(void* btn)
{
    //do something...
    LOG("BTN is double click");
}

__weak void btn4_long_press_start_handler(void* btn)
{
    //do something...
    LOG("BTN is long press start");
}

__weak void btn4_long_press_hold_handler(void* btn)
{
    //do something...
    LOG("BTN is long press hold");
}

#endif
/*

unit8_t btn1_id = 0;

struct Button btn1;

uint8_t read_button_GPIO(uint8_t button_id)
{
	// you can share the GPIO read function with multiple Buttons
	switch(button_id)
	{
		case btn1_id:
			return HAL_GPIO_ReadPin(B1_GPIO_Port, B1_Pin);
			break;

		default:
			return 0;
			break;
	}
}
void BTN1_PRESS_DOWN_Handler(void* btn)
{
	//do something...
}

void BTN1_PRESS_UP_Handler(void* btn)
{
	//do something...
}

...

int main()
{
	button_init(&btn1, read_button_GPIO, 0, btn1_id);
	button_attach(&btn1, PRESS_DOWN,       BTN1_PRESS_DOWN_Handler);
	button_attach(&btn1, PRESS_UP,         BTN1_PRESS_UP_Handler);
	button_attach(&btn1, PRESS_REPEAT,     BTN1_PRESS_REPEAT_Handler);
	button_attach(&btn1, SINGLE_CLICK,     BTN1_SINGLE_Click_Handler);
	button_attach(&btn1, DOUBLE_CLICK,     BTN1_DOUBLE_Click_Handler);
	button_attach(&btn1, LONG_PRESS_START, BTN1_LONG_PRESS_START_Handler);
	button_attach(&btn1, LONG_PRESS_HOLD,  BTN1_LONG_PRESS_HOLD_Handler);
	button_start(&btn1);

	//make the timer invoking the button_ticks() interval 5ms.
	//This function is implemented by yourself.
	__timer_start(button_ticks, 0, 5);

	while(1)
	{}
}
*/
