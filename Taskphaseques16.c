#include<stdio.h>
#include<ctype.h>
void compress(char x[],int i)
{
    if(x[i]=='\0')
    {
        return;
    }
    char b=x[i];
    int y=1;
    while(x[i+y]==x[i])
    {
        y++;
    }
    printf("%c%d",x[i],y);
    compress(x,i+y);
}
int main()
{
    int n,j;
    printf("Enter the length of string:");
    scanf("%d",&n);
    char a[n+1];
    printf("Enter the string:");
    scanf("%s",a);
    for(j=0;a[j]!='\0';j++)
    {
        if(isalpha(a[j])!=0)
        {
            continue;
        }
        else
        {
            printf("\nEnter string without numbers and spaces:");
            scanf("%s",a);
            break;
        }
    }
    compress(a,0);
}



