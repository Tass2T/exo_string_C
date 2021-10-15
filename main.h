#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <time.h>
#include <stdbool.h>

#define MARGIN_LEFT 4
#define MARGIN_TOP 4
#define HEIGHT 20
#define WIDTH 60

void drawFrame();
void getInput(int *fin, int* x, int* y);

#endif