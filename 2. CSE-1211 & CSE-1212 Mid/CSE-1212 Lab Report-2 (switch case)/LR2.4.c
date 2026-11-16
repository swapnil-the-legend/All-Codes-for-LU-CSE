#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    
    switch(year%400==0 && year%100!=0)
    {
        case 1:
        printf("Leap year");
        break;

        case 0:
        switch(year%4==0)
        {
            case 1:
            printf("Leap year");
            break;

            case 0:
            printf("Not leap year");
            break;
        }
    }
    
    return 0;
}