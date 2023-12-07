#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=97 && str[i]<=122)
            printf("%c",str[i]-32);

        else
            printf("%c",str[i]);
    }
    return 0;
}