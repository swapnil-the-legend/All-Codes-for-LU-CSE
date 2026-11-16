#include<stdio.h>
int main()
{
    char key;
    printf("Enter an alphabet character : ");
    scanf("%c", &key);

    switch(key>='a' && key<='z' || key>='A' && key<='Z')
    {
        case 1:
        printf("Alphabet character");
        break;

        case 0:
        printf("Not alphabet character");
        break;
    }

    return 0;
}