#include <stdio.h>
int main()
{
    char str[100],ch;
    int i=0;
    
    printf("enter the character : \n");
    while(ch != '\n')
    {
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    printf("i = %d",i-1);
    return 0;
}
