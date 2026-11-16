#include<stdio.h>
int main()
{
    int a=5, b=8;
    printf("a<b: %d\n", a<b);
    printf("(a<b) && (b>0): %d\n", (a<b) && (b>0));
    printf("a before increment: %d\n", a);
    printf("a after increment: %d\n", ++a);
    printf("b before decrement: %d\n", b);
    printf("b after decrement: %d\n", --b);
    return 0;
}

