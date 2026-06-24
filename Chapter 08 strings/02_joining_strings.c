#include <stdio.h>
#include <string.h>

int main(){
    char FirstName[50] = "Nisarg "; 
    char LastName[] = "Chaudhary";
    strcat(FirstName, LastName);
    printf("%s", FirstName);

    
    
    return 0;
}