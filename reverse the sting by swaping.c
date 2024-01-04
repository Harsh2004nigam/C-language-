#include <stdio.h>
int main()
{
    char str[100];
    int len,temp;
    printf("enter the string:\n");
    fgets(str,100,stdin);
    len = strlen(str)-1;
    for(int i=0; i<len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i];
        str[len-i] = temp;  
    }
    puts(str);
    return 0;
}