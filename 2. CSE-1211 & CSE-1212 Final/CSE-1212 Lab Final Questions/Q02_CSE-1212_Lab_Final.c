/*
Question 2: String Operations

Write a C program that reads a line of text (including spaces) and using
separate functions, prints:

1. The number of words (countWord)
2. The number of vowels (countVowel)
3. The number of consonants (countConsonant)
4. The string in reverse (printReverse)

Sample Input:
Enter a line: Jaman sir teaching programming

Sample Output:
Words = 4
Vowels = 9
Consonants = 18
Reverse = gnimmargorp gnihcaet ris namaJ
*/

//Solution:

#include<stdio.h>
#include<string.h>

int isLetter(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int countWord(char s[])
{
    int count=0, inWord=0;
    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i] != 'c' && !inWord)
        {
            inWord=1;
            count++;
        }
        else if(s[i] == 'c')
        {
            inWord=0;
        }
    }
    return count;
}

int countVowel(char s[])
{
    int count=0;
    for(int i=0; s[i] != '\0'; i++)
    {
        if(isVowel(s[i]))
        {
            count++;
        }
    }
    return count;
}

int countConsonant(char s[])
{
    int count=0;
    for(int i=0; s[i] != '\0'; i++)
    {
        if(isLetter(s[i]) && !isVowel(s[i]))
        {
            count++;
        }
    }
    return count;
}

void printReverse(char s[])
{
    for(int i = strlen(s)-1; i>=0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main()
{
    char s[200];
    printf("Enter a line: ");
    scanf("%[^\n]", s);

    printf("Words = %d\n", countWord(s));
    printf("Vowels = %d\n", countVowel(s));
    printf("Consonants = %d\n", countConsonant(s));
    printf("Reverse = ");
    printReverse(s);

    return 0;
}