#include<stdio.h>
int main()
{
    int key;
    printf("Enter a number : ");
    scanf("%d", &key);
    
    switch(key>0)
    {
        case 1:
        printf("Positive");
        break;
        
        case 0:
        switch(key<0)
        {
            case 1:
            printf("Negative");
            break;
            
            case 0:
            printf("Zero");
            break;
        }
    }
    
    return 0;
}