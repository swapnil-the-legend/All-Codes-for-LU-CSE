#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int x = 1;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d", x++);
        }
        for(int l=1;l<=i-1;l++)
        {
            x--;
            printf("%d", x);
        }
        printf("\n");
    }
    return 0;
}