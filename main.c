#include "main.h"

int main()
{
    Player p;
    NextLetter n;
    initStructs(&p,&n);
    int fin = false;

    initscr();
    refresh();

    move(p.y,p.x);
    printSentence(p.sentence, p.nbShown);
    drawNextLetter(&p, &n, &fin);
    refresh();
    while(!fin)
    {
        getInput(&fin, &p, &n);
    }

    endwin();

    return 0;
}