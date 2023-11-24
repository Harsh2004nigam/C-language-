// write a program to to check character is digit or npt
#include <stdio.h>
int main()
{
    char c;
    printf("enter the character :\n ");
    scanf("%c",&c);
    if(c>=0 && c<=9)
    {
        printf("it is the digit!!");
    }
    else
    {
        printf("it is not digit!!");
    }
    return 0;
}