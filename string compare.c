#include <stdio.h>
int main()
{
    char str[100],chr[100];
    int i,j,f=0;
    printf("Enter 1st string\n");
    gets(str);
    printf("Enter 2nd string\n");
    gets(chr);
    if(strlen(str) != strlen(chr))
    {
        f=1;
    }
    else
    {
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i] != chr[i])
            {
                f=1;
            }
        }
    }
    if(f==0)
    {
        printf("both the string are equall");
    }
    else
    {
        printf("String are not equal");
    }
    return 0;
}