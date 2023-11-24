#include <stdio.h>
int main()
{
    long long int a,b,c;
    int term;
    printf("Enter the term:",term);
    scanf("%d",&term);
    a=0;
    b=1;
    c=0;

    printf("fabonious serise are\n");

    for(int i=1; i<=term; i++)
    {
        printf("%lld\n",c);

        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}