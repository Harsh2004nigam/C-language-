#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],ch;
    int i,flag=0,len;
    
    printf("Enter the string\n");
    fgets(str,100,stdin);
    printf("enter the character : ");
    scanf("%c",&ch);
    len = strlen(str);
    for( i=len-1; i>=0; i--)
    {
         if(str[i] == ch)
         {
             flag=1;
             break;
         }   
    }
    if(flag == 1)
    {
        printf("character %c found at %d index",ch,i);
    }
    else
    {
        printf("charcter not found!!!");
    }
    return 0;
}