#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *filename = "data.txt";
    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("no file exist%s", filename);
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}