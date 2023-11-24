#include <stdio.h>
float changTem(float c);
int main()
{
    float c;
    printf("Enter the value of celcius:");
    scanf("%f",&c);
    printf("feranite = %.2f",changTem(c));
    return 0;
}
float changTem(float c)
{   float f;
    f = (c*(9/5))+32;
    return f;
}