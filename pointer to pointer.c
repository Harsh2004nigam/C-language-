#include <stdio.h>
int main()
{
int i = 5;
int *ptr = &i;
int **pptr = &ptr;

printf("%d\n",**pptr);
printf("%u\n",ptr);
printf("%u\n",pptr);
return 0;
}