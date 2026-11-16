#include<stdio.h>
int main()
{
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    for(i=1; i<=5; i++)
    {
        int arr[i];
        scanf("%d", &arr[i]);
        for(j=1; j<=5; j++)
        {
            int arr[j];
            scanf("%d", &arr[j]);
            printf("%d", arr[j]);
        }
        printf("%d", arr[i]);
    }
}