#include<stdio.h>

struct Account
{
    int accountNum;
    char holderName[50];
    float balance;
};

struct Account ac;

void checkBalance()
{
    printf("Your account balance is %.2f.\n", ac.balance);
    return;
}

void depositBalance(float *money)
{
    if(*money <= 0.0)
    {
        printf("Invalid amount!!\n");
    }
    else
    {
        ac.balance += *money;
        printf("Your deposit of %.2f taka was successful!!\n", *money);
    }
    return;
}

void withdrawBalance(float *money)
{
    if(*money <= 0.0)
    {
        printf("Invalid amount!!\n");
    }
    else if(*money > ac.balance)
    {
        printf("Insufficient balance!!\n");
    }
    else
    {
        ac.balance -= *money;
        printf("Your withdrawal of %.2f taka was successful!!\n", *money);
    }
    return;
}

int main()
{
    printf("Enter your account number: ");
    scanf("%d", &ac.accountNum);
    printf("Enter your name: ");
    scanf("%s", &ac.holderName);
    int choice;
    while(1)
    {
        printf("\n\n\n------Bank Account System-----\n\n\n");
        printf("1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter your action: ");
        scanf("%d", &choice);
        float money;
        switch(choice)
        {
            case 1:
                checkBalance();
                break;

            case 2:
                printf("Enter amount to be deposited: ");
                scanf("%f", &money);
                depositBalance(&money);
                break;

            case 3:
                printf("Enter amount to be withdrawn: ");
                scanf("%f", &money);
                withdrawBalance(&money);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!!!\nEnter again!!\n");
        }
    }
    return 0;
}
