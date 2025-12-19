#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,j,v=0,c=0;
    char a[100];
    printf("Enter the string:");
    scanf("%s",a);
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("Vowels:%d\nConsonants:%d",v,c);
    
    //scrambling the string
    srand(time(NULL));
    for(j=0;j<l;j++)
    {
        int r= rand()%l;
        char x=a[j];
        a[j]=a[r];
        a[r]=x;
    }
    printf("\nScrambled string:%s",a);
    return 0;
}