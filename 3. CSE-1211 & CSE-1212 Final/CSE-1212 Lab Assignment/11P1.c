#include<stdio.h>
int main()
{
    int i=7;
    char ch='Z';
    float f=2.5;
    double d=9.876;
    char str[]="Hello";
    printf("Integer: %d\n", i);
    printf("Character: %c\n", ch);
    printf("Float: %.2f\n", f);
    printf("Double: %.3lf\n", d);
    printf("String: %s", str);
    return 0;
}

