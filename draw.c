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

void printSentence(char *sentence, int length)
{
    for (int i = 0; i < length; i++)
    {
        printw("%c", sentence[i]);
    }
}

void drawNextLetter(Player *p, NextLetter *n, int *fin)
{
    if (p->nbShown + 1 <= sizeof(p->sentence) + 1)
    {
        move(n->y,n->x);
        printw("%c", p->sentence[p->nbShown]);
        move(p->y,p->x);
    } else {
        *fin = true;
    }
    
}

void checkIfCollide(Player *p, NextLetter *n, int *fin)
{
    if (p->x == n->x && p->y == n->y)
    {
        p->nbShown++;
        if (p->nbShown + 1 > p->sentence_size) *fin = true;
        else
        {
            n->x = rand() % WIDTH + MARGIN_LEFT;
            n->y = rand() % HEIGHT + MARGIN_TOP;
            refresh();
        } 
            
    }
}