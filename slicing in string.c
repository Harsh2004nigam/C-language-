
/* it is the function that slice the from
m to n just eample the world is "Helloworld"
value of n=2 & m=6 so it star from index 2 to 6
to answer after slicing is llow0  */
#include <stdio.h>
void slice(char ch[],int n, int m);
int main()
{
    char ch[] = "MyNameIsHarshNigam";
    slice(ch,2,12);

    return 0;
}

void slice(char ch[],int n, int m)
{
    char new_ch[100];
    int j=0;
    for(int i=n; i<=m; i++,j++)
    {
        new_ch[j] = ch[i];
    }
    puts(new_ch);
}