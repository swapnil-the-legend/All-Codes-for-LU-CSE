#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int GCD = gcd(100, 175); // Input a=100, b=175, 0+2+4+...+n when n is even.
    printf("%d", GCD);

    return 0;
}
