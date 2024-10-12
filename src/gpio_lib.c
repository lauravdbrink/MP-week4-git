/*
 * gpio_lib.c
 *
 *  Created on: 10 okt. 2024
 *      Author: Laura van den Brink
 */

#include <msp40.h>
#include <stdint.h>
#include <gpio_lib.h>

const unsigned char *PxOUT = {0x0202, 0x0203, 0x0222, 0x0223};

void pinSet(uint16_t port, uint16_t bit, bool val){        //Past port.bit aan naar val
    if (val){
        *PxOUT[port-1] |= (1 << bit);
    }
    else{
       *PxOUT[port-1] &= ~(1 << bit);
    }
}
