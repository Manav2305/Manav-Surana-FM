#include<stdio.h>
int main()
{
    int a,x=0,y,i,j;
    for(i=1;i<=3;i++)
    {
        printf("Enter number:\n");
        scanf("%d",&a);
        x=x+a;
    }
    printf("Sum=%d\n",x);
    if(x%2==0)
    {
        printf("The sum is even\n");
    }
    else
    {
        printf("The sum is odd\n");
    }
    for(j=2;j<=x;j++)
    {
        if(x<=1)
        {
            y=0;
            break;
        }
        if(x%j==0)
        {
            y=1;
            break;
        }
        else
        {
            y=2;
        }
    }
    if(y==0)
    {
        printf("Neither prime nor composite\n");
    }
    if(y==1)
    {
        printf("Sum is Composite\n");
    }
    if(y==2)
    {
        printf("Sum is Prime\n");
    }
    return 0;
}