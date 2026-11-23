#include <stdio.h.>
int main()
{
    struct student
    {
        char fn[64];
        char ln[64];
        char id[64];
        double score;
    };

    struct student std1;

    printf("Enter first name: ");
    scanf("%s", std1.fn);

    printf("Enter last name: ");
    scanf("%s", std1.ln);

    printf("Enter ID: ");
    scanf("%s", std1.id);

    printf("Enter score: ");
    scanf("%lf", &std1.score);

    printf("\n---Student Detail---\n");
    printf("First name: %s\n", std1.fn);
    printf("Last name: %s\n", std1.ln);
    printf("ID: %s\n", std1.id);
    printf("Score: %.2lf\n", std1.score);

    return 0;
}
