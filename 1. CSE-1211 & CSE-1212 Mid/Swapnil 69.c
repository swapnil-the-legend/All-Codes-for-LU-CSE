#include<stdio.h>
int main()
{
    int N, i, j;    
    scanf("%d", &N);
    for(i=N; i>=1; i--)
    {
        char c = 'A'+(N-i);
        for(j=1; j<=i; j++)
        {
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}