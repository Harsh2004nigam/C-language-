#include <stdio.h>
#include <string.h>

void salting(char password[]);
int main()
{
    char password[100];
    printf("Enter the password:");
    scanf("%s",&password);
    printf("\nNew password \n");
    salting(password);
    return 0;
}

void salting(char password[])
{
    char newpass[100];
    char salt[] = "123";
    strcat(password,salt);
    strcpy(newpass,password);
    puts(newpass);
}