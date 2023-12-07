#include <stdio.h>
#define max 100
int main()
{
    char str1[max],str2[max],str[2*max];
    int i,j;
    printf("Enter the 1st string\n");
    gets(str1);

    printf("Enter the 2nd string\n");
    gets(str2);

    printf("the concatinate string are....\n");
    for( i=0; i<=strlen(str1)-1; i++)
    {
        str[i] = str1[i];
    }
    for(j=0; j<=strlen(str2)-1; j++)
    {
        str[i] = str2[j];
        i++;
    }
    puts(str1);
    puts(str2);
    puts(str);
    return 0;
}