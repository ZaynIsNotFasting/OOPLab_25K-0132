#include <stdio.h>

int main()
{
    int units;
    float total_bill = 0.0;
    int remaining_units;

    printf("---Electricity Bill Calculator---\n");
    printf("Enter total number of units consumed: \n");

    if (scanf("%d", &units) != 1 || units < 0)
    {
        printf("Invalid input, Please enter a non negative integer. \n");
        return 1;
    }
    if (units <= 100)
    {
        total_bill = units * 0.5;
    }
    else {
        total_bill = 100 * 5.0;
        remaining_units = units - 100;

        if ( remaining_units <= 100 ){
        total_bill = total_bill + (remaining_units * 7);
        }
        else{
            total_bill = total_bill + (100 * 7);
            remaining_units = remaining_units - 100;

            if (remaining_units <= 100){
                total_bill = total_bill + (remaining_units * 10);
            }
            else {
                total_bill = total_bill + (100 * 10);
                remaining_units = remaining_units - 100;

                total_bill = total_bill + (remaining_units * 15);
            }
        }


    } 
    
    printf("\n Total units consumed: %d\n", units);
    printf("Total electricity bill is: Rs. %.2f\n", total_bill);
    return 0;
}