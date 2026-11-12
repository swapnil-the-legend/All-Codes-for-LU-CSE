#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum=%d\nDifference=%d\nProduct=%d\n", a+b, a-b, a*b);
    if(b!=0)
    {
        printf("Quotient=%d\nRemainder=%d", a/b, a%b);
    }
    else
    {
        printf("Division by zero is not allowed.");
    }
    return 0;
}

