/*
 * scheduler.h
 *
 *  Created on: Nov 25, 2022
 *      Author: Admin
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

typedef struct{
	void(*pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t  RunMe;
	uint32_t TaskID;
}sTasks;

#define SCH_MAX_TASK 40
#define NO_MAX_TASK 0

void SCH_INIT(void);

void SCH_ADD_TASK(void(*pFunction)(),uint32_t DELAY,uint32_t PERIOD);//settimer

void SCH_UPDATE(void);//timerrun

void SCH_DISPATCH(void);//timerflag

void SCH_DELETE(uint32_t ID);

#endif /* INC_SCHEDULER_H_ */
