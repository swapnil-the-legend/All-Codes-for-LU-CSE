#include<stdio.h>
int main()
{
    //Fibonacci series
    int n, first = 0, second = 1, ans;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i <= 1)
            ans = i;
        else
        {
            ans = (first + second);
            first = second;
            second = ans;
        }
        printf("%d ", ans);
    }
    return 0;
}
