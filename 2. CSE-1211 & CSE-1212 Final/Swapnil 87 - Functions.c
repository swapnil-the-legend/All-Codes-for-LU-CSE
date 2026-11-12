#include<stdio.h>
int SWAPNILCRAFT_1();
int SWAPNILCRAFT_2();
int SWAPNILCRAFT_3();
int SWAPNILCRAFT_4();

int main()
{
    int result1=SWAPNILCRAFT_1();
    int result2=SWAPNILCRAFT_2();
    int result3=SWAPNILCRAFT_3();
    int result4=SWAPNILCRAFT_4();
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d\n", result4);
    return 0;
}

int SWAPNILCRAFT_1()
{
    int num1, num2;
    scanf("%d %d", &num1, num2);
    return num1+num2;
}

int SWAPNILCRAFT_2()
{
    int num3, num4;
    scanf("%d %d", &num3, &num4);
    return num3-num4;
}

int SWAPNILCRAFT_3()
{
    int num5, num6;
    scanf("%d %d", &num5, num6);
    return num5*num6;
}

int SWAPNILCRAFT_4()
{
    int num7, num8;
    scanf("%d %d", &num7, num8);
    return num7/num8;
}

