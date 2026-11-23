#include<stdio.h>
void series(int n)
{
    if(n==1)
    {
        printf("1 ");
        return;
    }
    series(n-1); //n
    printf("%d ", n);
    return;
}

int main()
{
    series(10); //Input n=10
    printf("\nSuccessfully done");

    return 0;
}
