#include<stdio.h>

int main()
{
    int min,temp,m=0;
    int hour;
    printf("*********************************************\n\n");
    printf("Enter the Minuites : ");
    scanf("%d",&min);
    printf("_____________________________________________\n\n");
    
    if(min<60)
    {
         hour = min/60.0;
         printf("%.2f Hours",hour);
    }
    else if(min>60)
    {
         temp = min;
         while(min%60!=0)
         {
             min--;
             m++;
         }
        
         hour = min/60;
         min = m;
         printf("%d Hours : %d Minute",hour,min);   
    }
    else
    printf("1 hour");
    
    
    printf("\n_____________________________________________\n\n");

    return 0;
}