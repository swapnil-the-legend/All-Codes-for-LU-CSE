#include<stdio.h>
int main()
{
    char key;
    printf("Enter a character : ");
    scanf("%c", &key);

    switch(key>='a' && key<='z' || key>='A' && key<='Z')
    {
        case 1:
        printf("Alphabet");
        break;

        case 0:
        switch(key>='0' && key<='9')
        {
            case 1:
            printf("Digit");
            break;

            case 0:
            printf("Special character");
            break;
        }
    }
    
    return 0;
}