#include <lcdutils.h>
#include <lcddraw.h>
#include "stateMachines.h"
#include "switches.h"

static short x = 20;
static short y = 40;
static short dx = 2;

u_int color = COLOR_RED;

void update_color()
{
    if(!(switches & 1))
        color = COLOR_RED;

    if(!(switches & 2))
        color = COLOR_GREEN;

    if(!(switches & 4))
        color = COLOR_BLUE;

    if(!(switches & 8))
        color = COLOR_YELLOW;
}

void update_shape()
{
    fillRectangle(x,y,10,10,COLOR_BLACK);

    x += dx;

    if(x < 0 || x > screenWidth-10)
        dx = -dx;

    fillRectangle(x,y,10,10,color);
}
