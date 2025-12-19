#include<stdio.h>
int fib(int n)
{
    if (n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    while(1>0)
    {
        printf("Enter an integer:");
        scanf("%d",&n);
        if (n>0)
        {
            printf("The corresponding term of the fibonacci series is:%d",fib(n-1));
            return 0;
        }
        else
        {
            printf("Enter an integer greater than 0\n");
        }
    }
}