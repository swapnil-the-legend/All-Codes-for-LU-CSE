#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int N, i, j;
        scanf("%d", &N);
        for(i=1; i<=N; i++)
        {
            char ch='*';
            for(j=1; j<=i; j++)
            {
                printf("%d", j);
                printf("%c", ch);
                ch+32;
            }
            printf("\n");
        }
    }
}
