/*
Given error:

#include<stdio.h>
int main()
{
    int num1, num2, result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", num1, &num2)

    result=num1/num2;

    if(result=0)
    {
        printf("Result is zero");
    }

    else
    {
        printf("Result=%d\n")
    }

    return 0;
}
*/

//Correct code:

#include <stdio.h>
int main() 
{
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num2==0) 
    {
        printf("Division by zero is not allowed.\n");
    }
    else 
    {
        result=num1/num2;

        if (result==0) 
        {
            printf("Result is zero\n");
        }
        else 
        {
            printf("Result=%d\n", result);
        }
    }

    return 0;
}
