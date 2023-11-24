// write a program to get a number from  user and cube it
#include <stdio.h>
int main()
{
    int n,cube;
    printf("Enter the number:");
    scanf("%d",&n);
    cube=n*n*n;
    printf("Cube of number is : %d",cube);
    return 0;
}
