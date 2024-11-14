#include<stdio.h>
#include<math.h>
int main()
{
    int n=153;
    int rem=1,n1=n,count=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        count++;
    }
    int sum=0; 
    rem=1,n=n1;
    while(n>0){
        rem=n%10;
        printf("%d\n",rem);
        int t=pow(rem,count);
        printf("%d\n",t);
        sum+=t;
        printf("%d\n",sum);
        n=n/10;
    }

}