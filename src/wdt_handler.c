#include <libTimer.h>
#include "stateMachines.h"

void wdt_c_handler()
{
    static int secCount = 0;

    secCount++;

    if(secCount == 15)
    {
        update_color();
        update_shape();
        secCount = 0;
    }
}
