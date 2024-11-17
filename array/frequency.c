#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int n1=n;
    int a[n];
    printf("Enter element to the array : \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    int b[n];
    int j=0,k=0;
    for (int i = 0; i < n; i++)
    {
        b[j++]=a[i];
    }
    j=0;
    for (int i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                    n--;
                    j--;
                }
            }
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\n\tELEMENT\t\tFREQUENCY");
    i=0;
    while(i<n)
    {
        int count=0;
        for ( j = i+1; j < n1; j++)
        {
            if(a[i]==b[j])
            {
                count++;
            }
        }
        printf("\n\t%d\t\t%d",a[i],count+2);
        i++;
        
    } 
}