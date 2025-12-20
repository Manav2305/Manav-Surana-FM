#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, v = 0, c = 0;
    char a[100];
    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    int l = strlen(a);
    for(i = 0; i < l; i++)
    {
        if(isalpha(a[i]))
        {
            char b= tolower(a[i]);
            if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
            {
                v++;
            }
            else
            {
                c++;
            }    
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", v, c);
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