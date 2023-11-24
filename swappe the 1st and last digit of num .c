#include <stdio.h>
int main()
{
    int num,first,last,swap;
    printf("enter the value num:");
    scanf("%d",&num);

    first = num;
    while(first>=10)
    {
        first/=10;
    }
    last= num%10;

    printf("\nBefor swaping\n");
    printf("first = %d\n",first);
    printf("last = %d\n",last);

    swap=first;
    first=last;
    last=swap;
    printf("\n after swaping\n");
    printf("first = %d\n",first);
    printf("last = %d\n",last);

    return 0;
}