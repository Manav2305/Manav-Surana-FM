#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    while(i<n)
    {
        int j=0;
        while(j<((n*2)+1))
        {
            if(j<(n-i) || j>(n+i))
            {
                printf(" ");
                j++;
            }
            else
            {
                printf("* ");
                j=j+2;
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}