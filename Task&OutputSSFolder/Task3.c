#include <stdio.h>

int main()
{
    char item_type_choice;
    char action_choice;
     
    printf(" I, a student of FAST, welcome you to the Library Manager 9000 \n");


    printf("Enter desired type of item you'd like to manage \n");
    printf("Enter 'B' for books and 'M' for magazines: \n");

    if (scanf(" %c", &item_type_choice) != 1) {
        printf("Invalid input. Please enter 'B' or 'M'.\n");
        return 1;
    }

    switch (item_type_choice)
    {
        case 'B':
        printf("Do you want to issue(I) or return(R) a book? \n");
        if (scanf(" %c", &action_choice) != 1)
        {
            printf("Invalid input. Please enter 'I' or 'R'. \n");
            return 1;
        }

        switch (action_choice)
        {
            case 'I':
                printf("You have issued a book. \n");
                break;

            case 'R':
                printf("You have returned a book. \n");
                break;
            
            default:
                printf("Invalid action choice for books. \n");
        }
        break;


        case 'M':
                printf("Do you want to issue(I) or return(R) a magazine? \n");
        if (scanf(" %c", &action_choice) != 1)
        {
            printf("Invalid input. Please enter 'I' or 'R'. \n");
            return 1;
        }
        switch (action_choice)
        {
            case 'I':
                printf("You have issued a magazine. \n");
                break;

            case 'R':
                printf("You have returned a magazine. \n");
                break;
            
            default:
                printf("Invalid action choice for magazines. \n");
        }
        break;

    default:
    printf("\n Error. Invalid item type choice. \n");
    break;

    }

    printf(" Library Manager 9000 Tips toes out! \n");
    return 0;
}