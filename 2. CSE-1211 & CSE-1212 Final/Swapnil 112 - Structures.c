#include<stdio.h>
struct stdinfo
{
    char stdname[50];
    float CGPA;
    int LU_ID;
};

int main()
{
    struct stdinfo s1={"Swapnil", 3.42, 142};
    printf("%s %.2f %d", s1.stdname, s1.CGPA, s1.LU_ID);

    return 0;
}
