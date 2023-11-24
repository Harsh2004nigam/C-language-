#include <stdio.h>
int main()
{
    long  long  num;
    int count=0;

    printf("Enter the number:");
    scanf("%llld",&num);
    do
    {
        count++;
        num=num/10;
    } while(num!=0);
    printf("count = %d",count);
    return 0;
}