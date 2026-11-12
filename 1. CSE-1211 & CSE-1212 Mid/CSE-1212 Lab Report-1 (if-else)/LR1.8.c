#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);

    if(c>='A' && c<='Z')
    printf("Upper case");

    else if(c>='a' && c<='z')
    printf("Lower case");

    else
    printf("Not a upper/lower case");
    
    return 0;
}
