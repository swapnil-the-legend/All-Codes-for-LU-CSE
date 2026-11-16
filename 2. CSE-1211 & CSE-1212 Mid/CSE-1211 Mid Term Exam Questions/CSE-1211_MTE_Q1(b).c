#include<stdio.h>
int main()
{
    int i, a[5]={1, 2, 3, 4, 5};
    for(i=0; i<5; i++)
    {
        if(a[i]==2)
        {
            goto level;
        }
        if(a[i]==5)
        {
            break;
        }
        if(a[i]==4)
        {
            continue;
        }
    
        level:
            switch(a[i]==2)
            {
                case 1:
                    printf("Sylhet.\n");
                    break;
            }
            printf("Leading University, ");
    }
    printf("Kamal Bazar, Sylhet");

    return 0;
}