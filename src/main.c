#include <msp430.h>
#include <lcdutils.h>
#include <lcddraw.h>
#include <libTimer.h>

#include "switches.h"
#include "stateMachines.h"

int main()
{
    configureClocks();
    lcd_init();

    switch_init();

    clearScreen(COLOR_BLACK);

    enableWDTInterrupts();

    or_sr(0x18);

    while(1){}
}
