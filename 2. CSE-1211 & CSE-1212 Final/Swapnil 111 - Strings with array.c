#include<stdio.h>
int main()
{
    char arr[]="Arif";
    printf("Enter 4 characters: ");

    for(int i=0; i<4; i++)
    {
        scanf("%c", &arr[i]);
    }

    printf("The characters are: ");

    for(int i=0; i<4; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}
