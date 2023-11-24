#include <stdio.h>
int main()
{
    char ch;
    printf("enter a characrer:");
    scanf("%d",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        printf("ALPHABET");
    }
    else
    {
        printf("Not ALPHABET");
    }
    return 0;
}