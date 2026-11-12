#include<stdio.h>
int main()
{
    int N, i, j, k;
    int num=1;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d", num);
            num++;
        }
        for(k=i-1; k>=1; k--)
        {
            printf("%d", num-2);
            num--;
        }
        printf("\n");
    }
    return 0;
}