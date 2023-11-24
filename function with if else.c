#include <stdio.h>
void namaste();
void bonjour();
int main()
{
    char ch;
    printf("Enter f for french & i for indian\n");
    scanf("%c",&ch);
    if(ch == 'i')
        namaste();
    else if(ch == 'f')
        bonjour();
    else
        printf("Invaalid character");
    return 0;
}
void namaste()
{
    printf("Namaste\n");
}
void bonjour()
{
    printf("Bonjour\n");
}