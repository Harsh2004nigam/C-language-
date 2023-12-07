#include <stdio.h>
int main()
{
    char str[10]="harsh";
    char copy[10];
    for(int i=0; str[i]!='\0'; i++)
    {
          copy[i] = str[i];
    }
    printf("copy string are \n");
    
        printf("%s",copy);
    
    return 0;
}