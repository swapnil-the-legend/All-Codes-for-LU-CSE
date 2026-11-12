#include<stdio.h>
int main()
{
    int value;
    scanf("%d", &value);
    if (value<0 || value>127)
    {
        printf("Enter a valid ASCII value (0-127).");
    }
    else
    {
        printf("The character for ASCII value %d is '%c'.", value, value);
    }
    return 0;
}

