#include <stdio.h>
int main()
{
    char str[100];
    int i,vowel, consonant;
    i = vowel = consonant = 0;
    printf("Enter the string:\n");
    gets(str);
    while(str[i]!=0)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
               {
                   vowel++;
               }
               else
               {
                   consonant++;
               }
               
        }
        i++;
    }
    printf("vowel = %d\n", vowel);
    printf("consonant = %d\n", consonant);
    return 0;
}