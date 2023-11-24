#include <stdio.h>
int ToBin(int n);
int num,bin=0,reminder,f=1;
int main()
{
    int n;
    printf("Enter the value of number:\n");
    scanf("%d",&num);
    int temp = num;
    int a = ToBin(n);
    printf("Binary of %d = %d",temp,bin);
    return 0;
}

int ToBin(int n)
{
    while(num != 0)
    {
        reminder = num % 2;
        bin = bin + reminder * f;
        f = f * 10;
        num = num / 2;
    }
    return bin;
}