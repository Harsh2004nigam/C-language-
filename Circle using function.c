#include <stdio.h>
double Diameter(double radius);
double Circiumferencece(double radius);
double Area(double radius);
int main()
{
    float radius, dia, cir, area;

    printf("Enter the value of radius : ");
    scanf("%f",&radius);

    dia = Diameter(radius);
    cir = Circiumferencece(radius);
    area = Area(radius);

    printf("\nDiameter of Circle is %.2f units\n",dia);
    printf("\nCirciumferencece of Circle is %.2f units\n",cir);
    printf("\nArea of Circle is %.2f units\n",area);

    return 0;
}


double Diameter(double radius)
{
    return (2 * radius );
}

double Circiumferencece(double radius)
{
    return (2 * 3.14 * radius);
}
double Area(double radius)
{
    return ( 3.14 * radius * radius);
}
