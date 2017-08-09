#include"dir.h"

#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>

struct stat st = {0};

FILE *activeHead;
FILE *activeSource;

void printdir(char *dir, int depth)
{
    DIR *dp;
    struct dirent *entry;
    struct stat statbuf;

    if((dp = opendir(dir)) == NULL)
    {
        fprintf(stderr, "cannot open directory: %s \n", dir);
        return;
    }

    chdir(dir);

    while((entry = readdir(dp)) != NULL)
    {
        lstat(entry->d_name,&statbuf);
        if(S_ISDIR(statbuf.st_mode))
        {
            /* Found a directory, but ignore . and .. */
            if(strcmp(".",entry->d_name) == 0 ||
                    strcmp("..",entry->d_name) == 0)
                continue;
            /*found a dir*/
            printf("%*s%s/\n",depth,"",entry->d_name);
            /* Recurse at a new indent level */
            printdir(entry->d_name,depth+4);
        } else printf("%*s%s\n",depth,"",entry->d_name);
    }
    chdir("..");
    closedir(dp);
}

int createC(char *dir, char *sourceN, char *headN)
{
    if (stat(dir, &st) == -1) 
            mkdir(dir, 0700);

    char *head = malloc(sizeof(char) * (strlen(dir) + strlen(headN) + 2));
    strcpy(head, dir);
    strcat(head,"/");
    strcat(head, headN);
    printf("head: %s \n", head);

    char *source = malloc(sizeof(char) * (strlen(dir) + strlen(sourceN) + 2));
    strcpy(source, dir);
    strcat(source,"/");
    strcat(source, sourceN);
    printf("source: %s \n", source);

    activeHead = fopen(head, "wb");
    activeSource = fopen(source, "wb");

    free(source);
    free(head);

    if(!activeHead || !activeSource)
    {
        printf("error creating File \n");
        return 0;
    }
    return 1;
}

void writeToHead(char *txt)
{
    if(activeHead)
    {
        printf("writingToHead: \n %s",txt);
        fprintf(activeHead, "%s", txt);
    }
    else
    {
        printf("header file not initialized\n");
    }
}

void writeToSource(char *txt)
{
    if(activeSource)
    {
        printf("wrintingToSource: \n %s", txt);
        fprintf(activeSource, "%s", txt);
    }
    else
    {
        printf("source file not initialized\n");
    }
}

void closeC()
{
    fclose(activeHead);
    fclose(activeSource);
}
