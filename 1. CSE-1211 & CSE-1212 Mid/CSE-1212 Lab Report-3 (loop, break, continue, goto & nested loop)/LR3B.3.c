#include<stdio.h>
int main()
{
    int N, sum=0;
    scanf("%d", &N);

    int i=1;
    while(i<=N)
    {
        if(i%2==0)
            sum=sum+i;
            i++;
    }
    printf("%d", sum);

    return 0;
}

