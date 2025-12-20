#include<stdio.h>
#include<math.h>
int main()
{
    int a,x=0,y=2,i,j,z;        //y=2 beacuse we are assuming the sum to be prime initially becuase if the square root
                                // of the sum is less than 2, then the for loop(line 28) does not execute
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
    if(x<=1)
    {
        y=0;
    }
    else
    {
        z=sqrt(x);
        for(j=2;j<=z;j++)
        {
            if(x%j==0)
            {
                y=1;
                break;
            }
        }
    }
    if(y==0)
    {
        printf("Neither prime nor composite\n");
    }
    else if(y==1)
    {
        printf("Sum is Composite\n");
    }
    else
    {
        printf("Sum is Prime\n");
    }
    return 0;
}