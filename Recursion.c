#include <stdio.h>
void printHw(int count);
int main ()
{
    printHw(5);
    return 0;
}
void printHw(int count)
{
    if(count == 0)
        return;
    printf("%d.Hello World!!\n",count);
    printHw(count - 1);
}