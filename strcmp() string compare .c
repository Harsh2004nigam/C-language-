#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "harsh";
    char str2[] = "harsh";
    
    int comp = strcmp(str1,str2);
    printf("%d",comp);
    return 0;
}