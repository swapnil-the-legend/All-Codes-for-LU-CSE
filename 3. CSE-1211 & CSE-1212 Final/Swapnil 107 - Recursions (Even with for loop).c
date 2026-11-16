#include<stdio.h>
int even(int n)
{
    for(n=1; n<=10; n++)
    {
        if(n%2==0)
        {
            printf("%d ", n);
        }
    }
}

int main()
{
    int n;
    even(n);
    return 0;
}
