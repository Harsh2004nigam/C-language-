#include <stdio.h>
void toggel_case(char *str);

int main()
{
    char str[100];
    printf("enter the string\n");
    gets(str);
    toggel_case(str);
    return 0;
}

void toggel_case(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            printf("%c",str[i]-32);
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            printf("%c",str[i]+32);
        }
        else
        {
            printf("%c",str[i]);
        }
        i++;
    }

}