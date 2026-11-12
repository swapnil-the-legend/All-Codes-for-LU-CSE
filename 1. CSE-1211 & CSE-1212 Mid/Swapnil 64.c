#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if((a*a == b*b + c*c)  ||  (b*b == a*a+c*c)  || (c*c == a*a+b*b))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}