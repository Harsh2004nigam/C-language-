#include <stdio.h>
int main()
{
    int num,bin=0,reminder,f=1;
    printf("Enter the value of number:\n");
    scanf("%d",&num);
    int temp = num;
    while(num != 0)
    {
        reminder = num % 2;
        bin = bin + reminder * f;
        f = f * 10;
        num = num / 2;
    }
    printf("Binary of %d = %d",temp,bin);
    return 0;
}