#include <stdio.h>
int main()
{
    char str[100];
    int i,word;
    i=0;
    word=1;
    printf("Entr the string:\n");
    fgets(str,100,stdin);
    
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            word++;
        }
        i++;
    }
    printf("total numbers of word = %d",word);
    return 0;
}