#include<stdio.h>
int main()
{
    int p, q;
    printf("Enter two numbers : ");
    scanf("%d %d", &p, &q);
    
    switch(p>q)
    {
        case 1:
        printf("The maximum number is : %d", p);
        break;
        
        case 0:
        printf("The maximum number is : %d", q);
        break;
    }
    
    return 0;
}