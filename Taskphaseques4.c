#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the length of the password:");
    while(1>0)
    {
        scanf("%d",&n);
        if(n>0)
        {
            char x[n+1];
            printf("\nEnter the password to be set:");
            scanf("%s",x);
            char y[n+1];
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
        else
        {
            printf("\nEnter a vaild length of password:");
        }
    }
    
}