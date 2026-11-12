#include<stdio.h>
int natural_num(int n)
{
    for(n=1; n<=10; n++)
    {
        printf("%d ", n);
    }
}

int main()
{
    int n;
    natural_num(n);
    return 0;
}
