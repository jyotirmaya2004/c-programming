#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter row number of matrix : ");
    scanf("%d",&n1);
    printf("Enter coloumn number of matrix : ");
    scanf("%d",&n2);
    int a[n1][n2],r,c;
    printf("Enter data to the matrix 1 = ");
    for (r=0;r<n1;r++)
    {
        for (c=0;c<n2;c++)
        {
            scanf("%d",&a[r][c]);
        }
        
    }
    printf("\nThe matrix : \n");
    for (r=0;r<n1;r++)
    {
        for (c=0;c<n2;c++)
        {
            printf("%d ",a[r][c]);
        }
        printf("\n");
        
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j< n2; j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        
    }
    printf("\nThe matrix : \n");
    for (r=0;r<n2;r++)
    {
        for (c=0;c<n1;c++)
        {
            printf("%d ",a[r][c]);
        }
        printf("\n");
        
    }
    printf("\n");
    
}