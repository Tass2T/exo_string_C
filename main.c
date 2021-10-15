#include "main.h"

int main()
{
    initscr();
    refresh();
    int fin = false, x = MARGIN_LEFT + 3, y = MARGIN_TOP + 3;

    // drawFrame();
    move(y,x);
    refresh();
    while(!fin)
    {
        getInput(&fin, &x, &y);
    }

    endwin();

    return 0;
}