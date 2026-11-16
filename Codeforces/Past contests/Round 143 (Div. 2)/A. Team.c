#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int ans=0;
    while(n>0)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        int sum=a+b+c;
        
        if(sum>=2)
        {
         ans++;   
        }
        n--;
    }
    
    printf("%d", ans);
}