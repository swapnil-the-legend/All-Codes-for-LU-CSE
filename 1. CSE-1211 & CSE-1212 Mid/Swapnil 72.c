#include<stdio.h>
int main()
{
    int N, i, j, k, l;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            if(k==1 || k==i || k==N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(l=1; l<=i-1; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}