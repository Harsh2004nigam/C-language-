#include <stdio.h>
int main()
{
 long int n, fact=1;
printf("enter the number:");
scanf("%ld",&n);

for(int i=1; i<=n; i++)
{
fact=fact*i;
}
printf("Factorial = %ld",fact);
return 0;
}