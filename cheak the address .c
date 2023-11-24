#include<stdio.h>

void printAddress(int n);

int main()
{
    int n = 5;
    printf("address = |%u|\n",&n);
    printAddress(n);
    return 0;
}

void printAddress(int n)
{
    printf("address = %u\n",&n);
}

/*
   both are different because it
   the concept of call by value
   if we use the call by reference
   both the address are same.
*/