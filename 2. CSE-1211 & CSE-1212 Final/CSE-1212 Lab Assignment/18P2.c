#include<stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if(age>=18)
    {
        if(age>=60)
        {
            printf("Eligible for voting and Senior Citizen");
        }
        else
        {
            printf("Eligible for voting but not a Senior Citizen");
        }
    }
    else
    {
        if(age<=10)
        {
            printf("Not eligible for voting and Child");
        }
        else
        {
            printf("Not eligible for voting but not a Child");
        }
    }
    return 0;
}

