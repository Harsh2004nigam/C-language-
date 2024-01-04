#include <stdio.h>
int main()
{
    char str[100];
    int alpha,digi,other,i;
    alpha = digi = other = i = 0;

    printf("Enter the string\n");
    gets(str);

    while(str[i]!=0)
    {
        if((str[i]>'a' && str[i]<'z') || (str[i]>'A' && str[i]<'Z'))
        {
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digi++;
        }
        else
        {
            other++;
        }
        i++;
    }
    printf("\nAlphabet = %d\n",alpha);
    printf("Digit = %d\n",digi);
    printf("Special Character = %d\n",other);

    return 0;
}