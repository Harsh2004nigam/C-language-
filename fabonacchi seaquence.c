#include <stdio.h>
int fab(int n);
int main()
{
    printf("fabonachi of %d", fab(10));
    return 0;
}
int fab(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    int fabN = fab(n-1) + fab(n-2);
    //printf("fabonacci's of %d : %d",n,fab(n));
    return fabN;
}
