#include <stdio.h>
int main()
{
    float prize[3],sum;
    printf("Enter the prize of item:\n");
    scanf("%f",&prize[0]);

    printf("Enter the prize of item:\n");
    scanf("%f",&prize[1]);

    printf("Enter the prize of item:\n");
    scanf("%f",&prize[2]);

    sum = (prize[0] + prize[0]*0.18) + (prize[1] + prize[1]*0.18) + (prize[2] + prize[2]*0.18) ;

    printf("Totla prize of iteam with GST = %.2f ",sum);

    return 0;
}