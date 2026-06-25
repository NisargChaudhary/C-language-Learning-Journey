/*
Create a structure representing a bank account of a customer. What fields did you use and why?
*/
#include <stdio.h>
#include <string.h>

typedef struct bank_account
{
    char account_holder_name[50]; // To store the name of the account holder
    int account_number;            // Unique identifier for the bank account
    char account_type[20];        // To specify the type of account (e.g., Savings, Checking)
    float balance;                 // To keep track of the current balance in the account
} BankAccount;

int main()
{
    BankAccount account;
    strcpy(account.account_holder_name, "Nisarg Patel");
    account.account_number = 123456789;
    strcpy(account.account_type, "Savings");
    account.balance = 1000.00;
    printf("Account Holder Name: %s\n", account.account_holder_name);
    printf("Account Number: %d\n", account.account_number);
    printf("Account Type: %s\n", account.account_type);
    printf("Balance: %.2f\n", account.balance);
    return 0;
}