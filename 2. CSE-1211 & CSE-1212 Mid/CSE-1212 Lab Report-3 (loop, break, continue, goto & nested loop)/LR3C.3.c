#include<stdio.h>
int main()
{
    int N, sum=0;
    scanf("%d", &N);

    int i=1;
    do
    {
        if(i%2==0)
            sum=sum+i;
            i++;
    }
    while(i<=N);

    printf("%d", sum);

    return 0;
}


