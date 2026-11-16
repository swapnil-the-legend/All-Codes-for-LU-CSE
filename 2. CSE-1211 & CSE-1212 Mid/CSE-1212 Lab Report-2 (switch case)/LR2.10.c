#include<stdio.h>
int main()
{
    int m;
    printf("Enter the month of 2026 : "); //Month range limit 1~12
    scanf("%d", &m);

    switch(m)
    {
        case 1:
        printf("31"); //January
        break;

        case 2:
        printf("28"); //February
        break;

        case 3:
        printf("31"); //March
        break;

        case 4:
        printf("30"); //April
        break;

        case 5:
        printf("31"); //May
        break;

        case 6:
        printf("30"); //June
        break;

        case 7:
        printf("31"); //July
        break;

        case 8:
        printf("31"); //August
        break;

        case 9:
        printf("30"); //September
        break;

        case 10:
        printf("31"); //October
        break;

        case 11:
        printf("30"); //November
        break;

        case 12:
        printf("31"); //December
        break;

        default:
        printf("Invalid month of 2026");
        break;
    }

    return 0;
}