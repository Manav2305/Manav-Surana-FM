#include<stdio.h>
int main()
{
    int n;
    while(1>0)
    {
        printf("Enter the length of array:");
        scanf("%d",&n);
        if(n<2)
        {
            printf("Enter a integer greater than 1\n");
        }
        else
        {
            break;
        }
    }
    char a[n];
    int*p=a;
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int l=*p;
    int sl=NULL;
    for(int i=1;i<n;i++)
    {
        if(*(p+i)>l)
        {
            sl=l;
            l=*(p+i);
        }
        else if(*(p+i)>sl && *(p+i)!=l)
        {
            sl=*(p+i);
        }
    }
    if(sl==NULL)
    {
        printf("No second largest number");
    }
    else
    {
        printf("The second largest number is %d",sl);
    }
}