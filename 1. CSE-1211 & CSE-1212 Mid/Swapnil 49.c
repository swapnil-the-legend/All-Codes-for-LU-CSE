/*
H.W. for CSE-1212

Part-1

1. Sum
2. Sub
3. Multi
4. Div
5. Exit

Enter the chosen number :

Sample Input: 1
Sample Output: Enter two numbers :

Part-2:

Enter two numbers :

Sample Input : 3 4
Sample Output : Result : 7
*/

#include<stdio.h>
int main()
{
    level:
    printf("1. Sum\n");
    printf("2. Sub\n");
    printf("3. Multi\n");
    printf("4. Div\n");
    printf("5. Exit\n\n");
    printf("Enter the chosen number : ");
    int key;
    scanf("%d", &key);
    switch(key)
    {
    case 1:
        printf("\nEnter two numbers : ");
        int sum1, sum2;
        scanf("%d %d", &sum1, &sum2);
        int sum=sum1+sum2;
        printf("\nResult : %d\n\n\n\n", sum);
        goto level;

    case 2:
        printf("\nEnter two numbers : ");
        int sub1, sub2;
        scanf("%d %d", &sub1, &sub2);
        int sub=sub1-sub2;
        printf("\nResult : %d\n\n\n\n", sub);
        goto level;

    case 3:
        printf("\nEnter two numbers : ");
        int multi1, multi2;
        scanf("%d %d", &multi1, &multi2);
        int multi=multi1*multi2;
        printf("\nResult : %d\n\n\n\n", multi);
        goto level;

    case 4:
        printf("\nEnter two numbers : ");
        int div1, div2;
        scanf("%d %d", &div1, &div2);
        int div=div1/div2;
        printf("\nResult : %d\n\n\n\n", div);
        goto level;

    case 5:
        printf("\nExiting Successful\n\n\n\n");
        break;

    default:
        printf("\nInvalid chosen number\n\n\n\n");
        goto level;
    }
    return 0;
}
