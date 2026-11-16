#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int mid = n/2;
            int row = i - mid;

            if (row < 0)
            {
                row =- row;
            }

            int column = j - mid;

            if (column < 0)
            {
                column =- column;
            }

            if (row + column == mid)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
//****
//*   *
//*   *
//****
