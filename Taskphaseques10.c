#include<stdio.h>
int main()
{
    int r,c;
    while(1>0)
    {
        printf("Enter number of rows:");
        scanf("%d",&r);
        if(r<0)
        {
            printf("Enter a valid number of rows\n");
        }
        else
        {
            break;
        }
    }
    while(1>0)
    {
        printf("Enter number of columns:");
        scanf("%d",&c);
        if(c<0)
        {
            printf("Enter a valid number of columns\n");
        }
        else
        {
            break;
        }
    }
    int m[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element:");
            scanf("%d",&m[i][j]);
        }
    }
    printf("Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("Rotated matrix:\n");
    int x[c][r];
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            x[i][j]=m[r-1-j][i];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");   
    }
}