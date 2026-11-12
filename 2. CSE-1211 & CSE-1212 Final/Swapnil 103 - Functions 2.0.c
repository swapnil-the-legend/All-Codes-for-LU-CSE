#include <stdio.h>

int addition(); // function declare or function prototype

int main()
{
    int result = addition(); // function call and return value
    printf("%d", result);
    return 0;
}

int addition() // defining function
{
    int a = 5, b = 3;
    return a + b;
}

/*
returnType funcName(parameters)
{
    (code)

    return returnType;
}
*/
