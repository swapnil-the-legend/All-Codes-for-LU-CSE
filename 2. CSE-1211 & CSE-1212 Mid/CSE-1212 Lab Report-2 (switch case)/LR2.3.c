#include<stdio.h>
int main()
{
    int key;
    printf("Enter a number : ");
    scanf("%d", &key);
    
    switch(key%2==0)
    {
        case 1:
        printf("Even");
        break;
        
        case 0:
        printf("Odd");
        break;
    }
    
    return 0;
}