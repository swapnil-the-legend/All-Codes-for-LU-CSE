#include<stdio.h>
int main()
{
    for(int i=0; i<=5; i++)
    {
        if(i==4)
            break;
        printf("%d ", i);
    }

    printf("\n");

    for(int j=0; j<=4; j++)
    {
        if(j==3)
            continue;
        printf("%d ", j);
    }

    printf("\n");

    for(int k=0; k<=5; k++)
    {
        if(k==4)
            goto comment;
        printf("%d ", k);
    }
    comment:
        printf("\nJumped to exit!");

    return 0;
}

