//Copyright by Jubayer (ID: 0182610012101163)

#include <stdio.h>

int main() 
{
    int code, quantity, choice;
    int price;

    float total = 0;
    float discount = 0;
    float serviceCharge = 0;
    float finalBill;

    // Display Restaurant Menu
    printf("===== RESTAURANT MENU =====\n");
    printf("1. Burger        - Tk. 250\n");
    printf("2. Pizza         - Tk. 500\n");
    printf("3. Fried Chicken - Tk. 300\n");
    printf("4. Sandwich      - Tk. 180\n");
    printf("5. Coffee        - Tk. 120\n");

    // Ordering System
    while (1) 
    {
        printf("\nEnter item code (0 to finish): ");
        scanf("%d", &code);

        if (code == 0) 
        {
            break;
        }

        // Identify Food Item and Price
        switch (code) 
        {
            case 1:
                price = 250;
                break;

            case 2:
                price = 500;
                break;

            case 3:
                price = 300;
                break;

            case 4:
                price = 180;
                break;

            case 5:
                price = 120;
                break;

            default:
                printf("Invalid item code!\n");
                continue;
        }

        // Enter Quantity
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (quantity <= 0) 
        {
            printf("Invalid quantity!\n");
            continue;
        }

        // Calculate Total
        total += price * quantity;

        printf("Item added successfully!\n");
        printf("Subtotal: Tk. %.2f\n", price * quantity);
    }

    // Calculate Discount
    if (total >= 2000) 
    {
        discount = total * 0.15;
    }
    else if (total >= 1000) 
    {
        discount = total * 0.10;
    }
    else if (total >= 500) 
    {
        discount = total * 0.05;
    }
    else 
    {
        discount = 0;
    }

    // Calculate Final Bill After Discount
    finalBill = total - discount;

    // Calculate Service Charge
    if (finalBill > 1500) 
    {
        serviceCharge = finalBill * 0.05;
    }

    finalBill += serviceCharge;

    // Billing Menu
    while (1) 
    {
        printf("\n===== BILLING OPTIONS =====\n");
        printf("1. Display Total Bill\n");
        printf("2. Display Discount Amount\n");
        printf("3. Display Service Charge\n");
        printf("4. Display Final Payable Amount\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Total Bill: Tk. %.2f\n", total);
                break;

            case 2:
                printf("Discount Amount: Tk. %.2f\n", discount);
                break;

            case 3:
                printf("Service Charge: Tk. %.2f\n", serviceCharge);
                break;

            case 4:
                printf("Final Payable Amount: Tk. %.2f\n", finalBill);
                break;

            case 5:
                printf("Thank you for visiting!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

        // Exit the infinite loop
        if (choice == 5) 
        {
            break;
        }
    }

    return 0;
}