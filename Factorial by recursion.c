#include <stdio.h>
int fact(int n);
int main()
{   
    int n;
    printf("Enter the value of factorial:");
    scanf("%d",&n);
    printf("Factorial = %d\n",fact(n));
    return 0;
}
int fact(int n)
{
    if(n == 1 || n == 0)
        return 1;
    int factN = fact(n-1) * n;
    return factN;
}