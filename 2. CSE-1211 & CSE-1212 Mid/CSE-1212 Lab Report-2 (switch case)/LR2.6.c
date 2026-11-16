#include<stdio.h>
int main()
{
    char key;
    printf("Enter an alphabet character : ");
    scanf("%c", &key);

    switch(key>='b' && key<='d' || key>='f' && key<='h' || key>='j' && key<='n' || key>='p' && key<='t' || key>='v' && key<='z' || key>='B' && key<='D' || key>='F' && key<='H' || key>='J' && key<='N' || key>='P' && key<='T' || key>='V' && key<='Z')
    {
        case 1:
        printf("Consonant");
        break;

        case 0:
        switch(key=='a' || key=='e' || key=='i' || key=='o' || key=='u' || key=='A' || key=='E' || key=='I' || key=='O' || key=='U')
        {
            case 1:
            printf("Vowel");
            break;

            case 0:
            printf("Invalid vowel/consonant");
            break;
        }
    }
    
    return 0;
}