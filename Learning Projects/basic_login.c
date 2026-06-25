/* Basic Login Program */
#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    char correct_username[] = "admin";
    char correct_password[] = "password@123";

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}