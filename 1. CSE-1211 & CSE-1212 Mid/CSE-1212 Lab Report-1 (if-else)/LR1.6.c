#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);

    if(c>='B' && c<='D' || c>='F' && c<='H' || c>='J' && c<='N' || c>='P' && c<='T' || c>='V' && c<='Z')
        printf("Consonant");
    else
        printf("Vowel");

    return 0;
}