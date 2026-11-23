#include <stdio.h>
int fibo(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return (n - 1) + (n - 2);
}

int main()
{
    int ans = fibo(4); // Input n=6
    printf("%d", ans);

    return 0;
}
