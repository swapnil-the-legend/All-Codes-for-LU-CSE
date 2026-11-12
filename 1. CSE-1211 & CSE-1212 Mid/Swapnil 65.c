#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int a=1;a<=N;a++)
    {
        for(int b=1;b<=N-a;b++)
        {
            printf(" ");
        }
        for(int c=1;c<=a;c++)
        {
            printf("*");
        }
        for(int d=1;d<=a-1;d++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int e=N;e>=1;e--)
    {
        for(int f=1;f<=N-e;f++)
        {
            printf(" ");
        }
        for(int g=1;g<=e;g++)
        {
            printf("*");
        }
        for(int h=1;h<=e-1;h++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}