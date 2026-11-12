#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
        char s[101];
        scanf("%s", s);
        int ln = strlen(s);
        if(ln > 10){
            printf("%c%d%c\n", s[0], ln-2, s[ln-1]);
        }
        else
            printf("%s\n", s);

    }
}
