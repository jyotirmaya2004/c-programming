#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter your name : ");
    gets(a);
    int j=0,c=0;
    // for(int i=strlen(a);i>=0;i--)
    // {
    //     b[j++]=a[i];
    // }
    // for (int i = 0; i <= strlen(a); i++)
    // {
    //     if(a[i]==b[i])
    //     {
    //         printf("This is not palindrome");
    //         break;
    //     }
    //     else
    //         c++;
    // }
    
    
    if(strcmp(a,b)==0)
        printf("This is a palindrome");

    
    

}