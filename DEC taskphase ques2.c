#include<stdio.h>
int main()
{
    int x,h=0,m=0,s=0;
    printf("Enter the number of seconds:");
    scanf("%d",&x);
    h=x/3600;
    m=(x%3600)/60;
    s=x-((h*3600)+(m*60));
    printf("Result: %d hrs: %d mins : %d secs",h,m,s);
    return 0;
}