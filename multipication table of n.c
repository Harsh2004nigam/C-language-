#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("*******Multipaction table of %d is********\n",n);

    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n",n,i,i*n);
    }
    return 0;
}