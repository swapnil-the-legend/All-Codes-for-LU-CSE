#include <stdio.h>
int ss(int n) // value = "n"
{
    printf("Entering ss(%d): \n", n); // Step 1

    if (n == 1)
    {
        printf("Returning from ss(1): \n"); // Step 2

        return 1;
    }
    int sum = n;
    sum = sum + ss(n - 1);

    printf("Returning from ss(%d): \n", n); // Step 3

    return sum;
}

int main()
{
    int ans = ss(5); // Input n=5
    printf("%d", ans);

    return 0;
}
