#include <msp430.h>
#include "switches.h"

char switches = 0;

void switch_init()
{
    P2REN |= 0x0F;
    P2IE  |= 0x0F;
    P2OUT |= 0x0F;
    P2DIR &= ~0x0F;
}

void __interrupt_vec(PORT2_VECTOR) Port_2()
{
    switches = P2IN & 0x0F;

    P2IFG &= ~0x0F;
}
