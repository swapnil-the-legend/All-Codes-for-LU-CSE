//Q1: Make a restaurant self service kiosk. (Odd Number Student ID)
//Copyright by Raiyu (ID: 0182610012101161)

#include<stdio.h>
// Vars
float bill = 0;
int discount = 0;
char *items[5] = {"Burger", "Pizza", "Noodles", "Cupcake", "Coffee"};
int prices[5] = {120, 200, 80, 20, 40};
// helper func
void pchar(char c, int n) 
{
	while (n--) putchar(c);
}
void phead(char *s) 
{
		pchar('=', 6);
		printf(" %s ", s);
		pchar('=', 6);
		puts("");
}
// mains
void menu() 
{
	int choice;
	int quantity;
	for (;;) 
    {
		// Header
		phead("FOOD MENU");
		// List items
		for (int i = 0; i < 5; ++i) 
            printf("%d. %-10s - Tk.%d\n", i+1, items[i], prices[i]);
		puts("6. Confirm Order");
		// Ask for choice
		printf("Your Choice: ");
		scanf("%d", &choice);
		if (choice > 6 || choice < 1) 
        {
			puts("Invalid Choice");
			continue;
		}
		else if (choice == 6) 
            return;
		// Quantity
		printf("Enter quantity: ");
		scanf("%d", &quantity);
		// Finalize bill
		bill += quantity*prices[choice-1];
	}
}

void f_discount() 
{
	if (bill > 499 && bill < 1000) 
        discount = 5;
	else if (bill >= 1000 && bill < 1500) 
        discount = 10;
	else if (bill > 2000) 
        discount = 15;
	bill -= bill*((float)discount/100);
}

void billing() 
{
	int choice;
	char *choices[4] = {"Total Bill", "Total Discount", "Display Service Charge", "Exit"};
	// Header
	phead("BILLING");
	for (;;) 
    {
		for (int i = 0; i < 4; ++i)
        {
			printf("%d. %-10s\n", i+1, choices[i]);
		}
		printf("Enter Your Choice: ");
		scanf("%d", &choice);
		switch (choice) 
        {
			case 1: 
                printf("Total Bill: %.2f\n", bill); 
                break;
			case 2: 
                printf("Total discount %d%%\n", discount); 
                break;
			case 3: 
                printf("Service.. what?\n"); 
                break;
			case 4:
				return;
			default:
				printf("Invalid choice!");
		}
	}
}
int main() 
{
	menu();
	f_discount();
	billing();
}