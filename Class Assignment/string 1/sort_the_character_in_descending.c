#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,j,temp,p,c=0;
    printf("Enter a word : ");
    gets(s);
    printf("Display the string : ");
    puts(s);
    int n=strlen(s);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("The descending order of array : ");
    puts(s);
}