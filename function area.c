#include <stdio.h>
#include <math.h>
float SquareArea(float sid);
float CircleArea(float rad);
float RectangleArea(float l, float b);
int main()
{
float l,b,sid,rad;
printf("Enter the side:");
scanf("%f",&sid);
printf("Enter the radius:");
scanf("%f",&rad);
printf("Enter the lenght:");
scanf("%f",&l);
printf("Enter the breadth:");
scanf("%f",&b);

printf("Area of square = %.2f\n",SquareArea(sid));
printf("Area of circle = %.2f\n",(rad));
printf("Area of rectangle = %.2f\n",RectangleArea(l,b));
return 0;
}
float SquareArea(float sid)
{
 return sid * sid;
}
float CircleArea(float rad)
{
 return rad * rad * 3.14;
}
float RectangleArea(float l,float b)
{
 return l*b;
}
