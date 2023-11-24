#include <stdio.h>
int swap(int*a, int *b);
int main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("after swaping a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("after swaping a = %d and b = %d\n",a,b);
    return 0;
}

int swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
