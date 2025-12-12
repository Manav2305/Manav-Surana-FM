#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of integers you want:");
    scanf("%d",&n);
    int x[n];
    int y[n];
    int i=0,j,a,b=0;
    while(i<n)
    {
    
        printf("Enter number:");
        scanf("%d",&x[i]);
        i++;
    }
    //to remove dupliacte values
    for(j=0;j<i;j++)
    {
        int c=0; 
        for(int k=0;k<=b;k++)
        {
            if (x[j]==y[k])
            {
                c=1;
                break;
            }
        }
        if (c==0)
        {
            y[b]=x[j];
            b++;
        }
    }
    for (j = 0; j < b; j++) 
    {
        printf("%d ", y[j]);
    }

    return 0;
}