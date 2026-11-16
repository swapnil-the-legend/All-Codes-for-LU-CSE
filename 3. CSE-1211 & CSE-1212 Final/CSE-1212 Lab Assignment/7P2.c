#include<stdio.h>
int main() 
{
    const double PI=3.141592653589793;
    double r;
    scanf("%lf", &r);
    if(r<0)
    {
        printf("Radius cannot be negative.");
    }
    else
    {
        printf("Area = %.2 f", PI*r*r);
    }
    return 0;
}

