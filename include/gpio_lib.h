/*
 * gpio_lib.h
 *
 *  Created on: 10 okt. 2024
 *      Author: Laura van den Brink
 */
#include <msp40.h>
#include <stdint.h>


#ifndef INCLUDE_GPIO_LIB_H_
#define INCLUDE_GPIO_LIB_H_


void pinSet(uint16_tport, uint16_tbit, boolval);        //Past port.bit aan naar val


#endif /* INCLUDE_GPIO_LIB_H_ */
