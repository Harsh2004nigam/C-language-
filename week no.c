#include <stdio.h>
int
main ()
{
    int week;
    printf ("enterthe week (1-7)");
    scanf ("%d", &week);
    if (week == 1)
    {
        printf ("Monday");
    }
    else if (week == 2)
    {
        printf ("Twesday");
    }
    else if(week==3)
    {
        printf("Wensday");
    }
    else if(week==4)
    {
        printf("Thursday");
    }
    else if(week==5)
    {
        printf("Friday");
    }
    else if(week==6)
    {
        printf("saturday");
    }
    else if(week==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid number");
    }


    return 0;

}
