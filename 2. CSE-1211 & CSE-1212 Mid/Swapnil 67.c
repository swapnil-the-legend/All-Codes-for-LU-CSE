#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int N, i, j, k;
        char c = 'A';
        scanf("%d", &N);
        for(i=1; i<=N; i++)
        {
            for(j=1; j<=N-i; j++)
            {
                printf(" ");
            }
            for(k=1; k<=i; k++)
            {
                printf("%c", c);
                c++;
            }
            printf("\n\n");
        }
    }
    return 0;
}