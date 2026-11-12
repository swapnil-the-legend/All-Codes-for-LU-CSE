#include <stdio.h>
int main()
{
    int n, a[n];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    printf("%d", sum);

    return 0;
}
