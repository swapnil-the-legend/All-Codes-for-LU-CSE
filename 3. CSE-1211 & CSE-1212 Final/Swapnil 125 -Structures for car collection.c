#include<stdio.h>
struct Car
{
    char brand[50];
    char model[50];
    int year;
};

int main()
{
    struct Car car1={"McLaren", "P1", 2013};
    struct Car car2={"Porsche", "918 Syder", 2014};
    struct Car car3={"Toyota", "Harrier Z", 2020};

    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);

    return 0;
}
