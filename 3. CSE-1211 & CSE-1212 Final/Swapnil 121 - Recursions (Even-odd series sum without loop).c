#include <stdio.h>
int evensum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n % 2 == 1)
    {
        return evensum(n - 1);
    }
    return n + evensum(n - 1);
}

int main()
{
    int ans = evensum(10); // Input n=10
    printf("%d", ans);

    return 0;
}
