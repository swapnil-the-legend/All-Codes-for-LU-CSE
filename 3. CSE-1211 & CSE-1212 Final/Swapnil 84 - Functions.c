#include<stdio.h>
int SWAPNILCRAFT(); //declaration

int main()
{
    int result=SWAPNILCRAFT();
    printf("%d\n", result);
    return 0;
}

int SWAPNILCRAFT() //definition
{
    int num1=142, num2=168, total_num;
    total_num=num1+num2;
    return total_num;
}

/*
#include<stdio.h>
returnType funcName(parameters)
{
    (code)

    return returnType;
}

int main()
{
    returnType funcName(parameters);

    return 0;
}
*/
