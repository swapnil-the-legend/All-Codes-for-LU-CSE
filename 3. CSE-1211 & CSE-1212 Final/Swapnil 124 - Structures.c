#include <stdio.h>
#include <string.h>

struct stdinfo
{
    char stdname[50];
    float CGPA;
    int LU_ID;
};

int main()
{
    struct stdinfo s1 = {"Jubayer", 3.85, 163};
    struct stdinfo s2;

    strcpy(s2.stdname, "Swapnil");
    s2.CGPA = 3.50;
    s2.LU_ID = 142;

    printf("%s %.2f %d\n", s1.stdname, s1.CGPA, s1.LU_ID);
    printf("%s %.2f %d\n", s2.stdname, s2.CGPA, s2.LU_ID);

    return 0;
}
