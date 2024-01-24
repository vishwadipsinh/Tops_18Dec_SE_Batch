//Assesment
//create a Food Billing System

#include <stdio.h>

// Function to Display Food Items
void displayFoodItems() {
    printf("\n----------------- Available Food Items -----------------\n\n 1). Pizza\t\t300 Rs./pcs\n 2). Burger\t\t90 Rs./pcs\n 3). Sandwitch\t200 Rs./pcs\n 4). Dosa\t\t100 Rs./pcs\n--------------------------------------------------------");
}

// Function to get Quantity of Item from user
int getQuantity() {
    int quantity;
    printf("\n Enter the Quantity: ");
    scanf("%d", &quantity);
    return quantity;
}

int main() {
    int itemSelection, amount = 0, quantity, total = 0;
    char moreOrder;

    top: // Initialize (top:) for goto statement
    displayFoodItems(); // Calling function to display food items

    // Take input from user (which item user has to order)
    printf("\n Please enter your Choice: ");
    scanf("%d", &itemSelection);

    // Take quantity from user and calculate the amount of that order
    switch (itemSelection) {
        case 1:
            printf("\n You selected Pizza ");
            quantity = getQuantity();
            amount = quantity * 300;
            break;
        case 2:
            printf("\n You selected Burger ");
            quantity = getQuantity();
            amount = quantity * 90;
            break;
        case 3:
            printf("\n You selected Sandwitch ");
            quantity = getQuantity();
            amount = quantity * 200;
            break;
        case 4:
            printf("\n You selected Dosa ");
            quantity = getQuantity();
            amount = quantity * 100;
            break;
    }

    total = total + amount;          // Make total of all orders
    printf("\n Amount For Item = %d", amount); // Print last order's amount
    printf("\n---------------------- Final Bill -----------------------\n\n Total Amount = %d\n---------------------------------------------------------\n", total); // Print total amount

    // Ask user to make another order if he/she wants to make an order or not
    printf("\n Do you want to place More Orders? y & n: ");
    scanf(" %c", &moreOrder);

    // If he/she wants to make an order then repeat the process using goto statement
    if (moreOrder == 'y' || moreOrder == 'Y') {
        goto top;
    }else
    {printf("\n\n----------------------- Thanks ------------------------\n");}

    return 0;
}
