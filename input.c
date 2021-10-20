#include "main.h"

void moveCursor(int x, int y)
{
    clear();
    move(y,x);
    refresh();
}

void getInput(int *fin, Player *p, NextLetter *n)
{
    int c = getch();

    switch(c)
    {
        case 10:
            *fin = true;
            break;
        // HAUT
        case 65:
            if (p->y >= MARGIN_TOP) p->y = p->y - 1;
            moveCursor(p->x,p->y);
            checkIfCollide(p, n, fin);
            printSentence(p->sentence, p->nbShown);
            drawNextLetter(p, n, fin);
            break;
        // BAS
        case 66:
            if (p->y <= HEIGHT + MARGIN_TOP) p->y = p->y + 1;
            moveCursor(p->x,p->y);
            checkIfCollide(p, n, fin);
            printSentence(p->sentence, p->nbShown);
            drawNextLetter(p, n, fin);
            break;
        // GAUCHE
        case 68:
            if (p->x >= MARGIN_LEFT) p->x = p->x - 1;
            moveCursor(p->x,p->y);
            checkIfCollide(p, n, fin);
            printSentence(p->sentence, p->nbShown);
            drawNextLetter(p, n, fin);
            break;
        // DROITE
        case 67:
            if (p->x <= WIDTH + MARGIN_LEFT) p->x = p->x + 1;
            moveCursor(p->x,p->y);
            checkIfCollide(p, n, fin);
            printSentence(p->sentence, p->nbShown);
            drawNextLetter(p, n, fin);
            break;
        default:
            break;
    }
}