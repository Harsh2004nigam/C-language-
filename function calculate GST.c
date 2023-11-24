#include <stdio.h>
void calculateprize(float value);
int main()
{
    float value;
    printf("Enter the value:");
    scanf("%f",&value);
    calculateprize( value);
    return 0;
}
void calculateprize(float value)
{
    value += (0.18*value);
    printf("value is %0.4f\n",value);
}