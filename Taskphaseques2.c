#include<stdio.h>
int main()
{
    int x,h=0,m=0,s=0;
    printf("Enter the number of seconds:");
    while(1>0)
    {
        scanf("%d",&x);
        if(x>=0)
        {
            h=x/3600;
            m=(x%3600)/60;
            s=x-((h*3600)+(m*60));
            printf("\nResult: %d hrs: %d mins : %d secs",h,m,s);
            return 0;
        }
        else
        {
            printf("\nEnter a valid count of seconds:");
        }
    }
}