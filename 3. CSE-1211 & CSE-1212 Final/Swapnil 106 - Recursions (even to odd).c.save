#include<stdio.h>
int even(); //Required "even(n);" | 10

int odd(int n)
{
    if(n<=10)
    {
        printf("%d ", n+1);
        n++;
        even(n);
    }
}

int even(int n)
{
    if(n<=10)
    {
        printf("%d ", n-1);
        n++;
        odd(n);
    }
}

int main()
{
    int n=1;
    odd(n); //Even to odd
    return 0;
}
