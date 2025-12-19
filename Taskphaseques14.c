#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *fp;
    char fname[100];
    char a;
    int c=0,l=0,w=0;
    printf("Enter filename(along with extension):");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL)
    {
        printf("\n%s cannot be opened",fname);
        return 0;
    }
    while((a=fgetc(fp))!=EOF)
    {
        if(a=='\n')
        {
            l++;//number of lines
        }
        else if(a==' ')
        {
            w++;//nyumber of words
        }
        else
        {
            c++;//number of characters
        }
    }
    printf("\nNumber of characters: %d",c);
    printf("\nNumber of lines: %d",l+1);
    printf("\nNumber of words: %d",w+1);
    fclose(fp);
}