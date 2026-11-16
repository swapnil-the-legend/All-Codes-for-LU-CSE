#include<stdio.h>
#include<string.h>

int main()
{
    printf("------------ Welcome to SWAPNILCRAFT! ------------\n");

    level1:
    printf("Username : ");
    char username[20];
    scanf("%s", &username);

    char savedusername[]="@swapnilcraft18";

    if(strcmp(username, savedusername)==0)
    {
    
        level2:
        printf("Password : ");
        char pass[30];
        scanf("%s", &pass);

        char savedpass[]="Craftie@2026";

        if(strcmp(pass, savedpass)==0)
        printf("\nLogin Successful\n");
        else
        {
            printf("\nIncorrect Password\n");
            goto level2;
        }  
        
    }

    else
    {
        printf("\nInvalid username\n");
        goto level1;
    }

    return 0;
}

