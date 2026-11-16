#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10, b=20;
    switch(a)
    {
        case 10:
        switch(b)
        {
            case 20:
            printf("Hello");
            break;
        }
        break;

        case 20:
        printf("N/A");
        break;
    }
}