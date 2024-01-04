#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],ch;
    int i,flag=0,len;
    
    printf("Enter the string :\n");
    fgets(str,100,stdin);
    printf("enter the character : ");
    scanf("%c",&ch);
    len = strlen(str);
    for( i=0; i<len; i++)
    {
         if(str[i] == ch)
         {
             printf("character %c found at %d index\n",ch,i);
             flag++;
         }   
    }
    printf("%c occure at %d times\n",ch,flag);
    return 0;
}