#include <stdio.h>
int main()
{
    //(I)
    int a1 = 10;
    char b1 = 'A';
    float c1 = 5.5;
    double d1 = 10.25;

    a1 = a1 + b1;
    c1 = a1 / 4;
    d1 = c1 + b1 / 2;
    b1 = b1 + 3;

    printf("%d %.2f %.2lf %c\n", a1, c1, d1, b1);

    //(II)
    //Incomplete

    //(III)
    //Incomplete

    return 0;
}
