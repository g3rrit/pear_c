#include"compiler.h"
#include"dir.h"
#include"fileprod.h"
#include"stdio.h"
#include"stdlib.h"
#include"globals.h"
#include"string.h"
#include"filealloc.h"

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern int lineNum;

Compiler compiler;

void compInit(int argc, char **argv)
{
    lineNum = 0;
    compiler.files = 0;
    //filter commands from file with -- 
    int fileCount = 0;
    char *farr[argc];
    for(int i = 1; i < argc; i++)
    {
        if(strcmp("--", argv[i]) == 0)
        {
            i = doCommand(i, argv);
        }   
        else
        {
            farr[fileCount] = argv[i];
            printf("argv: %s\n", argv[i]);
            fileCount++;
        }
    }

    compiler.files = malloc(sizeof(char*) * fileCount);
    compiler.fcount = fileCount;
    for(int i = 0; i < fileCount; i++)
    {
        compiler.files[i] = farr[i];
    }
        
}

void compile()
{
    int compiling = 1;

    printf("starting compilation \n");

    int count = 0;
    while(compiling)
    {
        lineNum = 0;
        printf("files: %s\n",compiler.files[count]);
        FILE *inputFile = fopen(compiler.files[count],"r"); 
        count++;
        if(count >= compiler.fcount)
            compiling = 0;
        if(inputFile == NULL)
        {
            printf("couldnt open file\n");
            continue;
        }
        yyin = inputFile;

        initGlobalS();

        char *filestr = createStr(compiler.files[count - 1]);
        char *fnamefree = createStr(filestr);
        char *fname = fnamefree;
        if(strrchr(fname,47))
        {
            fname = strrchr(fname,47);
            fname = &(fname[1]);
        }
        //test
        fname[strlen(fname) - 5] = 0;
        //dir/test
        filestr[strlen(filestr) - 5] = 0;

        char *shs = ".h";
        char *scs = ".c";
        char *shb = "_H";
        //dir/test.h
        char *fnamehd = createStr(filestr);
        appendStr(&fnamehd,1,&shs);
        //dir/test.c
        char *fnamecd = createStr(filestr);
        appendStr(&fnamecd,1,&scs);
        //TEST_H
        char *fnameH = createStr(fname);
        appendStr(&fnameH,1,&shb);
        //test.h
        char *fnameh = createStr(fname);
        appendStr(&fnameh,1,&shs);
        //./dir
        char *dirname = createStr(filestr);
        char *tempdirname = strrchr(dirname,47);
        if(tempdirname)
            tempdirname[0] = 0;

        //gcc 
        //gccarr[count - 1] = createStr(dotCs);

        //initFiles("test.h", "TEST_H");
        initFiles(fnameh,fnameH);
        //createC("/Users/pear/Desktop/projects/pearlang/example/output/", "test.c","test.h");
        createC("./",fnamecd,fnamehd);

        printf("fname: %s\n", fname);
        printf("filestr: %s\n", filestr);
        printf("fnamehd: %s\n", fnamehd);
        printf("fnamecd: %s\n", fnamecd);
        printf("fnameH: %s\n", fnameH);
        printf("fnameh: %s\n", fnameh);
        printf("dirname: %s\n", dirname);

        free(fnamefree);
        free(filestr);
        free(fnamehd);
        free(fnamecd);
        free(fnameH);
        free(fnameh);
        free(dirname);

        do 
        {
            yyparse();
        }while(!feof(yyin));

        finishFiles();
        closeC();
        freeGlobalS();
        fclose(inputFile);
    }
}

void compCleanUp()
{
    if(!compiler.files)
        free(compiler.files);     
}

int doCommand(int i, char *argv[])
{
    if(strcmp("--o",argv[i]) == 0)
    {
        i++; 
        printf("output: %s\n",argv[i]); 
    } 
    return i;
}

void compileToOut(int argc, char **argv)
{
    char *args = createStr("gcc ");
    char *sem = " ";
    for(int i = 0; i < argc; i++)
    {
        printf("%i %s", i, argv[i]);
        appendStr(&args,1,&sem);
        appendStrF(&args,1,&argv[i]);
    }
    printf("args: %s\n", args);
    if(system(args) == -1)
    {
        printf("error compiling to .out\n");
    }  
    else
    {
        printf("finished compiling to .out\n");
    }

    /*for(int i = 0; i < argc; i++)
    {
        printf("count: %i\n",i);
        free(argv[i]);
    }*/
}
