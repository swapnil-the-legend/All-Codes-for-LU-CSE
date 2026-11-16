#include<stdio.h>
int leap_year()
{
    printf("Enter the year: ");
    int year;
    scanf("%d", &year);
    if(year%4==0)
        printf("Leap year");
    else if(year%400==0 && year%100!=0)
        printf("Leap year");
    else
        printf("Not leap year");
}

int main()
{
    leap_year();
    return 0;
}
