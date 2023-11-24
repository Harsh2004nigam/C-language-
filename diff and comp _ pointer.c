#include <stdio.h>
int main()
{
    int a = 22, b = 34;
    int *ptr = &a;
    int *_ptr = &b;

    printf("%u ,%u and difference = %u\n",ptr,_ptr,ptr-_ptr);

    _ptr = &a;

    printf("%u",ptr == _ptr);

    return 0;
}