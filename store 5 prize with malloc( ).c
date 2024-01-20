#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float*)malloc(5*sizeof(float));
    for(int i=0; i<5; i++)
    {
        printf("enter the %d prize : ",i+1);
        scanf("%f",&ptr[i]);
    }
    
    for(int i=0; i<5; i++)
    {
        printf(" %d item prize = %.3f\n",i+1,ptr[i]);
        
    }
    return 0;
}