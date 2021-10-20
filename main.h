#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#define MARGIN_LEFT 4
#define MARGIN_TOP 4
#define HEIGHT 20
#define WIDTH 60

#define NB_PHRASES 5
#define STRING_SIZE 40

typedef struct {
    int x;
    int y;
    char sentence[STRING_SIZE];
    int sentence_size;
    int nbShown;
} Player;

typedef struct {
    int x;
    int y;
} NextLetter;

void drawFrame();
void getInput(int *fin, Player *p, NextLetter *n);
void printSentence(char *sentence, int length);
void drawNextLetter(Player *p, NextLetter *n, int *fin);
void initStructs(Player *p, NextLetter *n);
void checkIfCollide(Player *p, NextLetter *n, int *fin);

#endif