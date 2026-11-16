#include <stdio.h>
int main()
{
    // Minimum Maximum
    int num1, num2; // Variable Declare
    scanf("%d %d", &num1, &num2);

    /*
    if(num1 > num2) { // True(1, 2, 3, 5, -1, -2) False(0)
        printf("Num1 is greater than num2");
        } else if (num2 > num1) {
            printf("Num2 is greater than num1");
            } else {
        printf("Num1 and Num2 is Equal");
        }
        
        */
       
       switch (num1 > num2) // num1 greater, num2 greater, equal
       {
           case 1:
           printf("Num1 is greater than num2.\n");
           break;
           
           case 0: // case 0: 
           switch (num2 > num1) // True(1) False(0)
           {
               case 1:
               printf("Num2 is greater than num1.\n");
               break;
               
               default:
                printf("Num1 and Num2 is Equal");
                break;
            }
        break;
        
    default:
        printf("I am Default");
    }

    /*
    if (condition)
    {
         code
    }
    */
}

/*
Multiline comment
*/