#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        if(i==4)
            goto jump;
        printf("%d ", i);
    }

    jump:
        printf("\nTest");

    return 0;
}


