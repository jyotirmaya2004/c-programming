#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter array size : ");
    scanf("%d",&n);
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
    int arr[n];
    int j,k;
    for (int i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to remove the duplicate
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Decrease the array size
                j--; // Check the new element at index j
            }
        }
    }
    int freq;
    for (int i = 0; i < n; i++)
    {
        freq=1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==a[j])
            {
                freq++;
                
            }
        }
        printf("\nThe number of element %d = %d",arr[i],freq);
        
    }
    
    
    

}