#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[20];
    printf("Enter a sentence : ");
    gets(a);
    printf("Enter start and last word : ");
    gets(b);
    for(int i=strlen(a);i>=0;i--)
    {
        a[i+strlen(b)]=a[i];
    }
    puts(a);
    for (int i = 0; i < strlen(b); i++)
    {
        a[i]=b[i];
    }
    puts(a);
    strcat(a,b);
    
    puts(a);
    
    

    
}