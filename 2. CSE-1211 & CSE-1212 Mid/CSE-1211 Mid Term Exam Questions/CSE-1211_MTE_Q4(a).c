#include <stdio.h>
int main()
{
    char grid[5][5];

    printf("Enter characters for the grid:\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j || i + j == 4)
            {
                grid[i][j] = '*';
            }
            else
            {
                scanf(" %c", &grid[i][j]);
            }
        }
    }

    printf("\nOutput:\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", grid[i][j]);
        }

        printf("\n");
    }

    return 0;
}
