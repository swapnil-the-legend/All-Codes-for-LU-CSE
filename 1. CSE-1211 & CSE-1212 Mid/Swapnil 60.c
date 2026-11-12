//Copyright by Shahadat Hossain Swapnil

#include<stdio.h>
int main()
{
    printf("Can you survive Swapnil?\n");
    printf("Enter your choice: ");
    char choice;
    scanf("%c", &choice);
    switch(choice)
    {
        case 'Y':
            printf("\nEnter your marks: ");
            unsigned int score;
            scanf("%d", &score);
            if(score>=80 && score<=100)
            {
                printf("You are survived. So, Akhi and everyone will congratulate you.");
            }
            else if(score>=40 && score<=80)
            {
                printf("You are survived.");
            }
            else
            {
                printf("You are not survived. So, Akhi and everyone will cry.");
            }
            break;
    
        case 'N':
            printf("You are not survived. So, Akhi and everyone will cry.");
            break;
    
        default:
            printf("Invalid choice.");
            break;
    }
    return 0;
}