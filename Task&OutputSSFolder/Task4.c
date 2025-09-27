#include <stdio.h>

int main()
{
    char category_choice;
    char item_choice;

    printf("Noming Online at your service! \n");

    printf("\n Select a category: \n");
    printf("Enter 'F' for food and 'D' for drinks: \n");
    printf("Your choice: \n");

    if (scanf(" %C", &category_choice) != 1) {
        printf("Invalid input. Please enter 'F' or 'D'.\n");
        return 1;
    }

    switch (category_choice){

        case 'F':
        printf("\n--Food Menu--\n");
        printf("1. Burger (Rs. 350) \n");
        printf("2. Lasagna (Rs. 400) \n");
        printf("Enter the number for your desired food: \n");

        if (scanf("%d", &item_choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            break;
        }

        switch (item_choice){
            
            case 1:
            printf("You have selected Burger. Proceed to payment. \n");
            break;

            case 2:
            printf("You have selected Lasagna. Proceed to payment. \n");
            break;
            default:
            printf("Invalid food choice. Please select 1 or 2. \n");
            break;
        }
        break;


        case 'D':
        printf("\n--Drinks Menu--\n");
        printf("1. Coffee (Rs. 170) \n");
        printf("2. Smoothie (Rs. 250) \n");

        if (scanf("%d", &item_choice) != 1) {
            printf("Invalid input. Please enter a number. \n");
            break;
        } 
        switch (item_choice){

            case 1:
            printf("You have selected Coffee. Proceed to payment. \n");
            break;

            case 2:
            printf("You have selected Smoothie. Proceed to payment. \n");
            break;

            default:
            printf("Invalid drink choice. Please select 1 or 2. \n");
        } 
        break;

    default:

        printf("Invalid category choice. Please restart and enter 'F' or 'D'. \n");
    break;

    } 
    printf("Noming online will be noming the space away now~ \n");
    return 0;
}