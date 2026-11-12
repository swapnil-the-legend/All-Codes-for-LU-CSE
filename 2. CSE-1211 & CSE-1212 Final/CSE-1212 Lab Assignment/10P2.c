#include<stdio.h>
int main()
{
    double a, b, c;
    //Read three numbers.
    scanf("%lf %lf %lf", &a, &b, &c);
    /*Add all three numbers and
    divide the sum by 3 to calculate
    their arithmetic average.*/
    printf("Average=%.2f", (a+b+c)/3);
    return 0;
}

