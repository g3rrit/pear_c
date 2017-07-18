#ifndef DIR_H
#define DIR_H

void printdir(char *dir, int depth);

int createC(char *dir, char *sourceN, char *headN);

void writeToHead(char *txt);

void writeToSource(char *txt);

void closeC();

#endif
