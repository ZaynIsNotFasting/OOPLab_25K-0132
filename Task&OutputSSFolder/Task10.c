#include <stdio.h>
#include <string.h> 

#define MAX_NAME_SIZE 25

int main() {
    int age; 
    int movie_choice; 

    char ticket_type[MAX_NAME_SIZE] = "";
    char movie_name[MAX_NAME_SIZE] = ""; 

    printf("--- Movie Ticket Booking System ---\n");

    printf("Please enter your age: ");
    if (scanf("%d", &age) != 1 || age <= 0) {
        printf("Error: Please enter a valid positive age.\n");
        return 1;
    }

    if (age < 12) {
        strcpy(ticket_type, "Child Ticket"); 
    } 
    else if (age >= 12 && age <= 60) {
        strcpy(ticket_type, "Adult Ticket");
    } 
    else if (age > 60) {
        strcpy(ticket_type, "Senior Citizen Ticket");
    } 
    else {
        printf("Error: Age criteria could not be met.\n");
        return 1;
    }
    
    printf("\nBased on your age, you qualify for a %s.\n", ticket_type);
    
    printf("\nAvailable Movies:\n");
    printf("1. Action - (Fast-paced Thrills!)\n");
    printf("2. Comedy - (Guaranteed Laughs!)\n");
    printf("3. Horror - (Spooky Scares!)\n");
    printf("Enter the number of your movie choice (1, 2, or 3): ");
    scanf("%d", &movie_choice);

    switch (movie_choice) {
        case 1:
            strcpy(movie_name, "Action Movie");
            break;
        case 2:
            strcpy(movie_name, "Comedy Movie");
            break;
        case 3:
            strcpy(movie_name, "Horror Movie");
            break;
        default:
            printf("\nError: Invalid movie selection. Booking failed.\n");
            return 1;
    }

    printf("\n--- Booking Confirmed ---\n");
    printf("Ticket Type: %s\n", ticket_type);
    printf("Movie Booked: %s\n", movie_name);
    printf("Enjoy the show!\n");

    return 0;
}
