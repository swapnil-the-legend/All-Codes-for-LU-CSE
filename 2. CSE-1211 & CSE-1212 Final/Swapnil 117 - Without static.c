#include<stdio.h>
int sta()
{
    int CR=0;
    CR++;
    printf("%d ", CR);
}

int main()
{
    sta();
    sta();
    sta();

    return 0;
}

//Without static
