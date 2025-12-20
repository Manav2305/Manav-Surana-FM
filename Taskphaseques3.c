#include<stdio.h>
int main()
{
    int x,r=0;
    printf("Enter the units used:");
    while(1>0)
    {
        scanf("%d",&x);
        if(x>0)
        {
            if(x<=100)
            {
                r=x*5;
            }
            if(x>=101 && x<=300)
            {
                r=500+((x-100)*8);
            }
            if(x>300)
            {
                r=2100+((x-300)*10);
            }
            printf("Total bill: Rs. %d",r);
            return 0;
        }
        else
        {
            printf("\nEnter vaild count of units used:");
        }
    }
}