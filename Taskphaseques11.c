#include<stdio.h>
void bubblesort(int a[],int n)
{
    int i,j,x;
    for(i=0;i<n-1;i++)      //to determine the number of switchs each element can possibly make
    {
        for(j=0;j<n-i-1;j++)        //comparing adjacent elements and swapping them
        {
            if(a[j]>a[j+1])
            {
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
}
void selectionsort(int a[],int n)
{
    int i,j,y,w;            //y is the index of the minimum value
    for(i=0;i<n;i++)        //determining the index of array
    {
        y=i;
        for(j=i+1;j<n;j++)   //comparing elements and swapping
        {
            if(a[j]<a[y])
            {
                y=j;
            }
        }
        w=a[i];
        a[i]=a[y];
        a[y]=w;
    }
}
int main()
{
    int n,i,c,z;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)    //taking an array as input
    {
        printf("\nEnter an integer:");
        scanf("%d",&a[i]);
    }
    while(1>0)
    {
        printf("\nEnter 1 for bubble sort or 2 for selection sort:");
        scanf("%d",&c);
        if(c==1)
        {
            //Bubble sort (It compares adjacent elements and swaps to keep the smaller element first)
            bubblesort(a,n);
            printf("\nSorted array:");
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            break;
        }
        else if(c==2)
        {
            //Selection sort (It compares the entire array and switches positions to bring the smallest elements in the front)
            selectionsort(a,n);
            printf("\nSorted array:");
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            break;
        }
        else
        {
            printf("\nEnter a valid number:");
        }
    }
    //Binary selection
    int b;
    int d=0;
    printf("\nEnter the number to be found:");
    scanf("%d",&b);
    int l=0,h=n-1;
    int m;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==b)
        {
            printf("\nElement found at position-%d",m+1);
            d=1;
            break;
        }
        else if(a[m]<b)
        {
            l=m+1;          //reducing the range to find b in the sorted array
        }
        else
        {
            h=m-1;          //reducing the range to find b in the sorted array
        }
    }
    if(d==0)
    {
        printf("\nElement not found");
    }
    return 0;
}