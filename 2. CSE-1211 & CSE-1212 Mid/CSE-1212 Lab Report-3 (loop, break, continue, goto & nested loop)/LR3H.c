#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice, flag = 1;
    float a, b;
    do
    {
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice < 1 || choice > 5)
        {
            printf("Invalid Choice!\n");
        }
        else if(choice == 5)
        {
            flag = 0;
        }
        else
        {
            if(choice == 1)
            {
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f\n", a+b);
            }
            if(choice == 2)
            {
                printf("Enter minuend number: ");
                scanf("%f", &a);
                printf("Enter subtrahend number: ");
                scanf("%f", &b);
                printf("Result: %.2f\n", a-b);
            }
            if(choice == 3)
            {
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                printf("Result: %.2f\n", a*b);
            }
            if(choice  == 4)
            {
                printf("Enter divident number: ");
                scanf("%f", &a);
                while(1)
                {
                    printf("Enter divisor number: ");
                    scanf("%f", &b);
                    if(b != 0)
                    {
                        break;
                    }
                    else
                    {
                        printf("Divisor can not be zero!\n");
                    }
                }
                printf("Result: %.2f\n", a/b);
            }
            while(1)
            {
                printf("Do you want to continue? (Y/N) : ");
                char ques;
                scanf(" %c", &ques);
                if(ques == 'N' || ques == 'n')
                {
                    flag = 0;
                    break;
                }
                if(ques != 'Y' && ques != 'y')
                {
                    printf("Invalid Input! Only (Y/N) allowed.\n");
                }
                else
                {
                    system("cls");
                    break;
                }
            }
        }
    }
    while(flag == 1);
    return 0;
}