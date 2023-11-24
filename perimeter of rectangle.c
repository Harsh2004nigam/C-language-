#include <stdio.h>
int main()
{
    float l,b,area;
    printf("Enter the value of length and breath\n");
    scanf("%f%f",&l,&b);
    area=l*b;
    printf("perimeter of rectangke is:%.3f",area);
    return 0;
}