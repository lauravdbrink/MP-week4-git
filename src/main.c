/*
 * main.c
 *
 *  Created on: 10 okt. 2024
 *      Author: Laura van den Brink
 */

#include <msp430.h>
#include <stdint.h>
#include <gpio_lib.h>

int main(void)
{
  WDTCTL = WDTPW | WDTHOLD;                 // Stop WDT
  PM5CTL0 &= ~LOCKLPM5;                     // Disable the GPIO power-on default high-impedance mode

  P1DIR |= BIT0 | BIT1;   // P1.0 and P1.1    output

  while(1){
      pinSet(1, 0, 1);

      i = 10000;                          // SW Delay
      do i--;
      while(i != 0);

      pinSet(1, 0, 0);
  }


}
