#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "Harsh ";
    char str2[] = "Nigam";
    
    strcat(str1,str2);
    puts(str1);
    return 0;
}