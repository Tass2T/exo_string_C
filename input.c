#include "main.h"

void moveCursor(int x, int y)
{
    clear();
    move(y,x);
    refresh();
}

void getInput(int *fin, int* x, int* y)
{
    int c = getch();

    switch(c)
    {
        case 10:
            *fin = true;
            break;
        // HAUT
        case 65:
            if (*y > MARGIN_TOP) *y = *y - 1;
            moveCursor(*x,*y);
            break;
        // BAS
        case 66:
            if (*y < HEIGHT) *y = *y + 1;
            moveCursor(*x,*y);
            break;
        // GAUCHE
        case 68:
            if (*x > MARGIN_LEFT)*x = *x - 1;
            moveCursor(*x,*y);
            break;
        // DROITE
        case 67:
            if (*x < WIDTH) *x = *x + 1;
            moveCursor(*x,*y);
            break;
        default:
            break;
    }
}