#include<stdio.h>
int main()
{
    double base, height, area;
    // Read the base anf perpendicular height.
    scanf("%lf %lf", &base, &height);
    //Triangle area id half of base times height.
    area=0.5*base*height;
    printf("Area=%.2f", area);
    return 0;
}

