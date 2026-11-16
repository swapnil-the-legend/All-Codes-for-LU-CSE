#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int N;
        scanf("%d", &N);
        int ar[N][N];
        int num = 1;
        for(int i=0;i<N;i++)
        {
            int r = 0, c = i;
            while(c>=0 && r<N)
            {
                ar[r][c] = num;
                num++;
                r++;
                c--;
            }
        }
        for(int i = 1;i<N;i++)
        {
            int r = i, c = N-1;
            while(c>=0 && r<N)
            {
                ar[r][c] = num;
                num++;
                r++;
                c--;
            }
        }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                printf("%d ", ar[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}