#ifndef DIR_H
#define DIR_H

#include"stdio.h"

void printdir(char *dir, int depth);

FILE *activeHead;
FILE *activeSource;

int createC(char *dir, char *sourceN, char *headN);

void writeToHead(char *txt);

void writeToSource(char *txt);

void closeC();

#endif

