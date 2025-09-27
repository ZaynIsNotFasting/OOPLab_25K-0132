#include <stdio.h>
#include <math.h> 


#define PI 3.14159265359

int main() {

    char shape_choice; 
    char calc_choice; 
    double result = 0.0;
    
    double radius, length, width, side1, side2, side3, base, height; 


    printf("\n---Geometry Calculator 15000---\n");

    printf("\nSelect a Shape:\n");
    printf("  'C' for Circle\n");
    printf("  'R' for Rectangle\n");
    printf("  'T' for Triangle\n");
    printf("Your choice: ");
    

    if (scanf(" %c", &shape_choice) != 1) {
        printf("\nError reading input.\n");
        return 1;
    }

    switch (shape_choice) {
        
        case 'C':
        case 'c':
            printf("\n--- Circle Selected ---\n");
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            
            printf("Calculate 'A'rea or 'P'erimeter (Circumference)? ");
            if (scanf(" %c", &calc_choice) != 1) {
                printf("\nError reading input.\n");
                break; 
            }
            
            switch (calc_choice) {
                case 'A':
                case 'a':
                    result = PI * radius * radius;
                    printf("Result: The Area of the Circle is %.4lf\n", result);
                    break;
                case 'P':
                case 'p':
                    result = 2 * PI * radius;
                    printf("Result: The Circumference (Perimeter) of the Circle is %.4lf\n", result);
                    break;
                default:
                    printf("Error: Invalid calculation choice for Circle.\n");
            }
            break; 

        case 'R':
        case 'r':
            printf("\n--- Rectangle Selected ---\n");
            printf("Enter length: ");
            scanf("%lf", &length);
            printf("Enter width: ");
            scanf("%lf", &width);

            printf("Calculate 'A'rea or 'P'erimeter? ");
            if (scanf(" %c", &calc_choice) != 1) {
                printf("\nError reading input.\n");
                break; 
            }
            
            switch (calc_choice) {
                case 'A':
                case 'a':
                    result = length * width;
                    printf("Result: The Area of the Rectangle is %.4lf\n", result);
                    break;
                case 'P':
                case 'p':
                    result = 2 * (length + width);
                    printf("Result: The Perimeter of the Rectangle is %.4lf\n", result);
                    break;
                default:
                    printf("Error: Invalid calculation choice for Rectangle.\n");
            }
            break; 

        case 'T':
        case 't':
            printf("\n--- Triangle Selected ---\n");
            
            printf("Calculate 'A'rea or 'P'erimeter? ");
            if (scanf(" %c", &calc_choice) != 1) {
                printf("\nError reading input.\n");
                break; 
            }

            switch (calc_choice) {
                case 'A':
                case 'a':
                    printf("Enter base length: ");
                    scanf("%lf", &base);
                    printf("Enter height: ");
                    scanf("%lf", &height);
                    result = 0.5 * base * height;
                    printf("Result: The Area of the Triangle is %.4lf\n", result);
                    break;
                case 'P':
                case 'p':
                    printf("Enter length of side 1: ");
                    scanf("%lf", &side1);
                    printf("Enter length of side 2: ");
                    scanf("%lf", &side2);
                    printf("Enter length of side 3: ");
                    scanf("%lf", &side3);
                    result = side1 + side2 + side3;
                    printf("Result: The Perimeter of the Triangle is %.4lf\n", result);
                    break;
                default:
                    printf("Error: Invalid calculation choice for Triangle.\n");
            }
            break;
            
        default:
            printf("\nERROR: Invalid shape selection. Please restart the program.\n");
            break;
    }
    
    printf("\nCalculation complete. Thank you for using the Geometry Calculator!\n");
    return 0;
}