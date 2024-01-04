#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len,flag=0;
    printf("Enter the string\n");
    fgets(str,100,stdin);
    len = strlen(str)-1;
    for(int i=0; i<len/2; i++)
    {
        if(str[i] != str[len-1-i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("string is Pailndrome");
    }
    else
    {
        printf("NOT Pailndrome!!");
    }
    return 0;
}