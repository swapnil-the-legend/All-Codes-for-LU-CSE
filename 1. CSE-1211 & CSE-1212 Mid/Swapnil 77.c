#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int s;
        scanf("%d", &s);
        for(int i=1; i<=s; i++)
        {
            char ch;
            for(int j=1; j<=s; j++)
            {
                if(j%2 == 0)
                {
                    ch = 'x';
                    printf("%c", ch);
                }
                else
                {
                    ch = '.';
                    printf("%c", ch);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}