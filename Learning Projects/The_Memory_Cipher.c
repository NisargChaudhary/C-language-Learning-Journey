/*
Write a program that takes a password and encrypts it by shifting every letter forward by 1 in the alphabet. 
(e.g., 'a' becomes 'b', 'A' becomes 'B')

The Rules:
1. Create a string in main: char message[] = "HAL";
2. Create a function: void encrypt(char *str)
3. Pass your string to the function.
4. Inside the function, use a while or for loop to iterate through the string using the pointer. Add 1 to the actual value of each character. 
(Yes, you can do math on characters! str[i] = str[i] + 1;).
5. Print the encrypted string back in main(). (If you use "HAL", it should print "IBM").
*/
#include <stdio.h>
#include <string.h>
void encrypt(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + 1;
    }
}
int main()
{
    char message[1024];
    printf("Enter a message: ");
    gets(message);
    encrypt(message);
    printf("Encrypted message: %s", message);
    return 0;
}