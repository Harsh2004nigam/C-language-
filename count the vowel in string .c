#include <stdio.h>
int count_vowel(char str[]);
int main()
{
    char str[100] ;
    printf("Enter the string\n");
    gets(str);
    int c = count_vowel(str);
    printf("vowel are : %d",c);
    return 0;
}

int count_vowel(char str[])
{
    int count = 0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}