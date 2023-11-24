#include<stdio.h>
int calMarks(int sci, int math, int eng);

int main()
{
    int sci = 98, math = 89, eng = 69;
    printf("Total percentage = %d %",calMarks( sci, math, eng));

    return 0;
}

int calMarks(int sci, int math, int eng)
{
    int per = ((sci + math + eng)/3);
    return per;
}