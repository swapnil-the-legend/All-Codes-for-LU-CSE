#include<stdio.h>
int main()
{
    int id, age;
    float cgpa;
    printf("Enter ID, age and CGPA: ");
    scanf("%d %d %f", &id, &age, &cgpa);
    printf("ID: %d\n", id);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f", cgpa);
    return 0;
}

