#include<stdio.h>
#include<string.h>
int main()
{
    char x[]="01234";
    char y[6];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter password:");
        scanf("%s",y);
        if(strcmp(x,y)==0)
        {
            printf("Correct password\nAcess Granted");
            return 0;
        }
        else
        {
            printf("Incorrect password.\n");
            printf("%d tries remaining\n",2-i);
        }
    }
    printf("Access Denied");
    return 0;
}