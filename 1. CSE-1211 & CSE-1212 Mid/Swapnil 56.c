#include<stdio.h>
int main()
{
    int a=4;
    {
        a=3;
        printf("%d", a);
    }
    printf("%d", a);
}

