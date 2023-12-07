#include <stdio.h>
int main()
{
    char str[] = "harsh nigam";
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length = %d",count);
    return 0;
}