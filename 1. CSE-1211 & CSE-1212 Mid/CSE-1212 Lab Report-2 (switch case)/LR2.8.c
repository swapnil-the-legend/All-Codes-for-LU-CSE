#include<stdio.h>
int main()
{
    char key;
    printf("Enter an alphabet character : ");
    scanf("%c", &key);

    switch(key>='A' && key<='Z')
    {
        case 1:
        printf("Upper case");
        break;

        case 0:
        switch(key>='a' && key<='z')
        {
            case 1:
            printf("Lower case");
            break;

            case 0:
            printf("Invalid upper/lower case");
            break;
        }
    }

    return 0;
}