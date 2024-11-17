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
        printf("\n\t%d\t\t%d",a[i],count+1);
        i++;
        
    } 