#include <stdio.h>
int Max(int num1,int num2);
int Min(int num1,int num2);

int main()
{
    int num1,num2,max,min;
    printf("Enter the value of both the number : \n");
    scanf("%d%d",&num1,&num2);

    max = Max(num1 , num2);
    min = Min(num1 , num2);

    printf("Maximum = %d\n",max);
    printf("Minimum = %d\n",min);
    return 0;
}

int Max(int num1,int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int Min(int num1,int num2)
{
    return (num1 > num2) ? num2 : num1;
}
