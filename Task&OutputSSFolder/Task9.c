#include <stdio.h>

int main() {

    int department_choice;
    int course_choice; 

    printf("--- University Course Registration System ---\n");

    printf("Select a Department:\n");
    printf("1. Computer Science (CS)\n");
    printf("2. Electrical Engineering (EE)\n");
    printf("3. Business Administration (BBA)\n");
    printf("Enter your choice (1, 2, or 3): ");

    if (scanf("%d", &department_choice) != 1) {
        printf("Error: Invalid input format.\n");
        return 1;
    }

    switch (department_choice) {
    
        case 1: 
            printf("\nYou selected Computer Science. Available Courses:\n");
            printf("1. Data Structures\n");
            printf("2. Algorithms\n");
            printf("3. Database Systems\n");
            printf("Enter your course choice (1, 2, or 3): ");
            scanf("%d", &course_choice);

            switch (course_choice) {
                case 1: 
                    printf("\nRegistered successfully for: Data Structures.\n"); 
                    break;
                case 2: 
                    printf("\nRegistered successfully for: Algorithms.\n"); 
                    break;
                case 3: 
                    printf("\nRegistered successfully for: Database Systems.\n"); 
                    break;
                default: 
                    printf("\nError: Invalid course choice for CS department.\n"); 
                    break;
            }
            break; 
            
        case 2: 
            printf("\nYou selected Electrical Engineering. Available Courses:\n");
            printf("1. Circuit Theory\n");
            printf("2. Digital Logic Design\n");
            printf("3. Power Systems\n");
            printf("Enter your course choice (1, 2, or 3): ");
            scanf("%d", &course_choice);

            switch (course_choice) {
                case 1: 
                    printf("\nRegistered successfully for: Circuit Theory.\n"); 
                    break;
                case 2: 
                    printf("\nRegistered successfully for: Digital Logic Design.\n"); 
                    break;
                case 3: 
                    printf("\nRegistered successfully for: Power Systems.\n"); 
                    break;
                default: 
                    printf("\nError: Invalid course choice for EE department.\n"); 
                    break;
            }
            break; 

        case 3: 
            printf("\nYou selected Business Administration. Available Courses:\n");
            printf("1. Financial Accounting\n");
            printf("2. Marketing Management\n");
            printf("3. Business Law\n");
            printf("Enter your course choice (1, 2, or 3): ");
            scanf("%d", &course_choice);

            switch (course_choice) {
                case 1: 
                    printf("\nRegistered successfully for: Financial Accounting.\n"); 
                    break;
                case 2: 
                    printf("\nRegistered successfully for: Marketing Management.\n"); 
                    break;
                case 3: 
                    printf("\nRegistered successfully for: Business Law.\n"); 
                    break;
                default: 
                    printf("\nError: Invalid course choice for BBA department.\n"); 
                    break;
            }
            break; 

        default: 
            printf("\nError: Invalid department choice. Please enter 1, 2, or 3.\n");
            break;
    }

    printf("\nRegistration process complete.\n");
    return 0;
}