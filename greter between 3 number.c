#include <stdio.h>
int main()
{
 int num1,num2,num3;
 printf("enter three number:\n");
 scanf("%d%d%d",&num1,&num2,&num3);
 
 if(num1>num2)
 {
     if(num1>num3)
     {
         printf("num1 = %d is greter",num1);
         
     }
     else
     {
          printf("num3 = %d is greter",num3);
     }
 }
 
 else
 {
     if(num2>num3)
     {
         printf("num1 = %d is greter",num1);
         
     }
     else
     {
          printf("num3 = %d is greter",num3);
     }
 }
  
    return 0;
}