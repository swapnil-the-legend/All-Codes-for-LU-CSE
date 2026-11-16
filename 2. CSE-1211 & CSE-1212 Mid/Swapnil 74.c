#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int N;
        scanf("%d", &N);
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=N; j++)
            {
                printf("%d ", (i+j-1)/N + (i+j-1)%N);
            }
            printf("\n");
        }
    }
}