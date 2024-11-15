#include<stdio.h>
int main()
{
    int n;
    printf("Enter range of array : ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter number to the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    int new,po;
    printf("\nEnter the new number to be insert : ");
    scanf("%d",&new);
    printf("Enter position of new number : ");
    scanf("%d",&po);
    for(int i=n-1;i>=po;i--)
    {
        a[i]=a[i+1];
    }
    a[po]=new;
    printf("The new new array : ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",a[i]);
    }



    

}