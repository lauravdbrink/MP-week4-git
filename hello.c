#include <stdio.h>
#include <msp430.h> 


/**
 * hello.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	printf("hallo wereld, wereld. de wereld is van mij!\n");
	
	return 0;
}
