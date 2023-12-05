#include <stdio.h>
#include <stdio.h>

int main()
{
    char oldStr[] = "Harsh,old";
    char NewStr[] = "Nigam,New";
    
    strcpy(NewStr,oldStr);
    puts(NewStr);
    return 0;
}