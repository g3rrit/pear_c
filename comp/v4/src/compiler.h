#ifndef COMPILER_H
#define COMPILER_H

typedef struct Compiler Compiler;
struct Compiler
{
    int fcount;
    char **files;

    char *outputFolder;
};

Compiler compiler;

void compInit();

void compile();

void compCleanUp();

int doCommand(int i, char *argv[]);

void compileToOut(int argc, char **argv);

#endif

