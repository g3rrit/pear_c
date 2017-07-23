#ifndef PSTD_H
#define PSTD_H

#include"stdbool.h"

void __init();

void __appendEvent(char *name, bool (*fun)());

void __dispatchEvent(char *name);

void test();

#endif
