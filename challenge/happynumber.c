#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number to check happy number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        int dg=0;
        int sum=0;
        while (n>0)
        {
            dg=n%10;
            sum+=(dg*dg);
            n/=10;
        }
        n=sum;
        
        
    }
    if (n==1)
    {
        printf("Yes");
    }
    else
        printf("no");
    
}