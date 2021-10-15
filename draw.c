#include "main.h"

void drawFrame()
{
    int x = MARGIN_LEFT;
    int y = MARGIN_TOP;

    move(y, x);
    refresh();
    for(y; y <= HEIGHT; y++)
    {
        for(x; x <= WIDTH; x++)
        {
            move(y,x);
            refresh();
            if (y == MARGIN_TOP || y == HEIGHT) printw("_");
            else if (x == MARGIN_LEFT || x == WIDTH) printw("||");
        }
            x = MARGIN_LEFT;
    }
}