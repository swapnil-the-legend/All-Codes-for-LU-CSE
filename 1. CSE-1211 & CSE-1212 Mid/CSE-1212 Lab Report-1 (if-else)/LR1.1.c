#include<stdio.h>
int main()
{
    int l, m, n;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &l, &m, &n);
    
    if(l>m && l>n)
    printf("The maximum number is : %d", l);

    else if(m>n)
    printf("The maximum number is : %d", m);

    else
    printf("The maximum number is : %d", n);

    return 0;
}