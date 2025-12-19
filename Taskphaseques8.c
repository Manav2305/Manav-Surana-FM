#include<stdio.h>
int main()
{
    int j=0,n,i,x;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    int *p=a;
    for (i=0;i<n;i++)
    {
        printf("Enter a element:");
        scanf("%d",p+i);
    }
    printf("Swapped array:\n");
    while(j<(n-1))
        {
            x=*(p+j);
            *(p+j)=*(p+(j+1));
            *(p+(j+1))=x;
            j=j+2;
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",*(p+i));
        }
}