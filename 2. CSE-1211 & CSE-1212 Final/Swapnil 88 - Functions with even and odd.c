#include<stdio.h>
int Even_and_Odd();

int main()
{
    Even_and_Odd();
    return 0;
}

int Even_and_Odd()
{
    int num;
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}

