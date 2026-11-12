#include<stdio.h>
int main()
{
    printf("----- Menu -----\n");
    printf("1. Laptops\n");
    printf("2. Smartphones\n");
    printf("3. PCs\n");
    printf("Enter the chosen number : ");
    int n, na, nb, nc;
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        printf("\n");
        printf("1. Lenovo\n");
        printf("2. ASUS\n");
        printf("3. HP\n");
        printf("Enter the chosen number : ");
        scanf("%d", &na);
        switch(na)
        {
        case 1:
            printf("\n");
            printf("Lenovo is a Chinese company");
            break;

        case 2:
            pirntf("\n");
            printf("ASUS is a Taiwanese company");
            break;

        case 3:
            printf("\n");
            printf("HP is an American company");
            break;
        }
        break;
    }

    case 2:
        printf("\n");
        printf("1. Apple\n");
        printf("2. Samsung\n");
        printf("3. Huawei\n");
        printf("Enter the chosen number : ");
        scanf("%d", &nb);
        switch(nb)
        {
        case 1:
            printf("\n");
            printf("Apple is an American company");
            break;

        case 2:
            printf("\n");
            printf("")
        }
}
