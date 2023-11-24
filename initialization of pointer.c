#include <stdio.h>
int main()
{
    int a = 1;
    float b = 23.45;
    char c = 'C';
    long long int d = 12453467687;

    printf("value of a = %d and address of a = %u\n",a,&a);
    printf("value of b = %f and address of a = %u\n",b,&b);
    printf("value of c = %c and address of a = %u\n",c,&c);
    printf("value of d = %lld and address of a = %u\n",d,&d);
    return 0;
}