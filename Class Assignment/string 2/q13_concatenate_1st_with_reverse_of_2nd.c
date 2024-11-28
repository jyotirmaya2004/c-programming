#include<stdio.h>
int main()
{
    char a[100],b[50],c[50],d[50];
    printf("Enter string 1 : ");
    gets(a);
    printf("Enter string 2 : ");
    gets(b);
    int j=0,l;
    for (int i = 0; i <= strlen(b); i++)
    {
        if(b[i]!=32&&b[i]!='\0')
            c[j++]=b[i];
        else
        {
            c[j]='\0';
            strcat(d,c);
            j=0;
        }
    }

}