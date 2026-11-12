#include<stdio.h>
int main()
{
    int length=8, width=5;
    float area= (float)length*width;
    char unit='a';
    printf("Area=%.2f square %c", area, unit);
    return 0;
}

