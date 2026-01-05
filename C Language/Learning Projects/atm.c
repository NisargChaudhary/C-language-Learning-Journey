#include <stdio.h>

int main() {
    int choice;

    // 1. Display the Menu
    printf("--- ATM MENU ---\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Cash\n");
    printf("3. Deposit Cash\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
    
    // 2. Get User Input
    scanf("%d", &choice);

    // 3. Switch Logic
    switch(choice) {
        case 1:
            printf("Checking Balance... You have $5,000.\n");
            break; // STOP here! Don't run the lines below.

        case 2:
            printf("Withdrawing Cash... Please wait.\n");
            break; // STOP here!

        case 3:
            printf("Depositing Cash... Please wait.\n");
            break; // STOP here!

        case 4:
            printf("Exiting... Thank you!\n");
            break; // STOP here!

        default:
            // This runs if they type 4, 5, 0, 99, etc.
            printf("Error! Please choose a valid option (1-4).\n");
    }

    return 0;
}