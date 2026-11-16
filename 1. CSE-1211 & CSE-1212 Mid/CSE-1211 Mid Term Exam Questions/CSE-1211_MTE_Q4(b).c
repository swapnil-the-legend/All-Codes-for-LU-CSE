#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == j)
                continue;

            if (i + j > 6)
                break;

            printf("%d ", i + j);
        }
        printf("\n");
    }

    return 0;
}
