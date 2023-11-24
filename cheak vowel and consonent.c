#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'
    || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("VOWEL");
    }
    else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
   {
    printf("CONSONENT");
   }
   else
   {
       printf("not a alphabet");
   }
    return 0;
    
}