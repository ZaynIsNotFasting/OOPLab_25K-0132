#include <stdio.h>
#include <string.h> 

#define MAX_SIZE 20

int main() {

    char entered_username[MAX_SIZE];
    char entered_password[MAX_SIZE];

    const char expected_username[] = "admin";
    const char expected_password[] = "1234";

    printf("--- Simple Login System ---\n");

    printf("Enter Username: ");

    if (scanf("%s", entered_username) != 1) {
        printf("Error reading username.\n");
        return 1;
    }

    printf("Enter Password: ");
    if (scanf("%s", entered_password) != 1) {
        printf("Error reading password.\n");
        return 1;
    }

    printf("\n--- Checking Credentials ---\n");

    if (strcmp(entered_username, expected_username) == 0) {

        if (strcmp(entered_password, expected_password) == 0) {
            
            printf("Result: Login Successful! Welcome, admin.\n");
            
        } 
        

        else {
            printf("Error: Invalid Password entered.\n");
        }
    } 
    
    else {
        printf("Error: Invalid Username entered.\n");
    }

    printf("---------------------------\n");
    return 0;
} // I asked a friend on how to use string and youtubed the rest. of course AI also taught me q bit.
