#include<stdio.h>
int prime(int num);
int armstrong (int num);
int perfect(int num);

int main()
{
    int num;
    printf("Enter the value of number : ");
    scanf("%d",&num);

    if(prime(num))
    {
        printf("%d is prime number\n",num);
    }
    else
    {
        printf("%d is not prime number\n",num);
    }

    if(armstrong(num))
    {
        printf("%d is armstrong number\n",num);
    }
    else
    {
        printf("%d is not armstrong number\n",num);
    }

    if(perfect(num))
    {
        printf("%d is perfect number",num);
    }
    else
    {
        printf("%d is not perfect number",num);
    }

    return 0;
}

int prime(int num)
{
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

int armstrong(int num)
{
    int orgNum, reminder, result = 0, count=0;

    orgNum = num;
    while(num!=0)
    {
        count++;
        num/=10;
    }
    while(num!=0)
    {
        reminder =  num%10;
        result += pow(reminder,count);
        num/=10;
    }

    if(result == orgNum)
    {
        return 1;
    }
    return 0;
}

int perfect(int num)
{
    int sum=1;

    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
            sum+=i;
    }
    if(sum == num)
        return 1;
    return 0;

}
