/*
    Do the following:
    1. Set the pizzaName to "Margherita"
    2. Set the quantity to 3
    3. Set the price to 250.50
    4. Call calculateBill() and pass myOrder into it.
    5. Print the final returned bill.
*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char pizzaName[50];
    int quantity;
    float pricePerPizza;
} Order;

// Function Declaration
float calculateBill(Order currentOrder) {
    float totalCost = currentOrder.quantity * currentOrder.pricePerPizza;
    return totalCost;
}

int main() {
    Order myOrder = {"Margherita", 3, 250.50};
    // No need to use strcpy or set individual fields since they're already initialized
    float finalBill = calculateBill(myOrder);
    printf("Final Bill: $%.2f\n", finalBill);

    return 0;
}