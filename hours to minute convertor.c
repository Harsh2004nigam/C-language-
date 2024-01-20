#include<stdio.h>

int main()
{
    int hour,min;
    printf("Enter the hour : ");
    scanf("%d",&hour);
    
    printf("Enter the minute : ");
    scanf("%d",&min);
    
    min = (hour*60) + min;
    printf("Mintus = %d",min);
    
    return 0;
}