#include "main.h"

int stringCount(char *sentence)
{
    int result = 0;
    for (result; sentence[result] != '\0'; result++){
        
    }
    return result;
}

void initStructs(Player *p, NextLetter *n)
{
    srand(time( NULL ));
    // init Player
    char stringList[NB_PHRASES][STRING_SIZE] = {"archer","warhammer40K", "squid_games", "rick_and_morty", "corto_maltese"};
    strcpy(p->sentence, stringList[rand() % NB_PHRASES]);
    p->x = rand() % WIDTH + MARGIN_LEFT;
    p->y = rand() % HEIGHT + MARGIN_TOP;
    p->sentence_size = stringCount(p->sentence);
    p->nbShown = 1;

    // init NextLetter
    n->x = rand() % WIDTH + MARGIN_LEFT;
    n->y = rand() % HEIGHT + MARGIN_TOP;
}

