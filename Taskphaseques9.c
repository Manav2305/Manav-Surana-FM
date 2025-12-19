#include<stdio.h>
int main()
{
    int m[4][4];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter element:");
            scanf("%d",&m[i][j]);
        }
    }
    //printing the matrix
    printf("Matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    //sum of matrix
    int x=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            x+=m[i][j];
        }
    }
    printf("Sum of matirx=%d\n",x);
    //sum of primary diagonal
    int a=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if (i==j)
            {
                a+=m[i][j];
            }
        }
    }
    printf("Sum of primary diagonal=%d\n",a);
    //sum of secondary diagonal
    int b=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i+j==3)
            {
                b+=m[i][j];
            }
        }
    }
    printf("Sum of secondary diagonal=%d\n",b);
    return 0;
}