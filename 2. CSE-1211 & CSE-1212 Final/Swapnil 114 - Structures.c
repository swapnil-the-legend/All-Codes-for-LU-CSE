#include<stdio.h>
#include<string.h>

struct stdinfo
{
    char stdname[50];
    float CGPA;
    int LU_ID;
};

int main()
{
    strcpy(s1.stdname, "Swapnil");
    s1.GPA=3.50;
    s1.LU_ID=142;

    printf("%s %.2f %d", s1.stdname, s1.CGPA, s1.LU_ID);

    return 0;
}
