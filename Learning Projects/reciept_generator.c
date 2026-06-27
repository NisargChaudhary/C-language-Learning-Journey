/*
Write a code that take my current order and build a struct to calculate the total cost of the order and 
generates a reciept for a pizza order on a new text file.*/
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
    Order myOrder = {"Margherita", 3, 250.00};
    // No need to use strcpy or set individual fields since they're already initialized
    float finalBill = calculateBill(myOrder);
    FILE *file = fopen("reciept.txt", "w");
    fprintf(file, "<====================== PIZZA RECEIPT ======================>\n");
    fprintf(file, "Item: %s\n", myOrder.pizzaName);
    fprintf(file, "Quantity: %d\n", myOrder.quantity);
    fprintf(file, "Total Cost: $%.2f\n", finalBill);
    fprintf(file, "<============================================================>\n");
    fclose(file);
    printf("Reciept generated successfully!\n");

    return 0;
}