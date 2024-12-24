#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fileptr=NULL;
    char ch;
    fileptr=fopen("text.txt","r");
    while(1)
    {
        if((ch=fgetc(fileptr))!=EOF)
            printf("%c",ch);
        else
            break;
    }
    fclose(fileptr);
}