#include <stdio.h>

double deposit(double *balance)
{
    printf("Enter your amount: ");
    int amount;
    scanf("%d", &amount);
    return (*balance + amount);
}

double withdraw(double *balance)
{
    printf("Enter your amount: ");
    int amount;
    scanf("%d", &amount);
    return (*balance - amount);
}

void interest(double balance)
{
    printf("Enter your rate: ");
    double rate;
    scanf("%lf", &rate);
    printf("For how long (year): ");
    double year;
    scanf("%lf", &year);
    double result = (rate * year * balance) / 100;
    printf("\nYour expected total balance : %.2lf\n", result + balance);
}

int main()
{
    double balance = 1000, deposit_tran = 0, withdraw_tran = 0;
    int times = 0;

task:
    printf("\n\n");
    printf("=======================\n");
    printf("  BANK ACCOUNT SYSTEM  \n");
    printf("=======================\n");

    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Check Balance\n");
    printf("4. Calculate Interest\n");
    printf("5. Transaction Summary\n");
    printf("6. Exit\n");
    printf("=======================\n");
    printf("Enter Your Choice: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 6)
    {
        printf("\nThank you for using our bank!\n");
        return 0;
    }
    else if (choice == 1)
    {
        double result = deposit(&balance);

        deposit_tran += result - balance;
        balance = result;
        times++;

        goto task;
    }
    else if (choice == 2)
    {
        double result = withdraw(&balance);
        withdraw_tran += balance - result;
        balance = result;
        times++;
        goto task;
    }
    else if (choice == 3)
    {
        printf("\n");
        printf("Current Balance = %.2lf", balance);
        goto task;
    }
    else if (choice == 4)
    {
        interest(balance);
        goto task;
    }
    else if (choice == 5)
    {
        if (times == 0)
        {
            printf("\nNo transactions!\n");
        }
        else
        {
            printf("\nTransaction times = %d\n", times);
            printf("Total deposit = %.2lf\n", deposit_tran);
            printf("Total withdrawal = %.2lf\n", withdraw_tran);
            printf("total transaction = %.2lf\n", deposit_tran - withdraw_tran);
        }
        goto task;
    }
    else
    {
        printf("\nwrong choice!\n");
        return 0;
    }

    return 0;
}
