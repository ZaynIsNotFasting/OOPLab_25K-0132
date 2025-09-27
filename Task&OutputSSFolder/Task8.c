#include <stdio.h>
#include <math.h>

int main() {

    double principal_amount; 
    double annual_rate;     
    double time_years;    
    int interest_type;       
    double total_repayment;
    double monthly_installment;
    double total_months;

    printf("--- Loan EMI Calculator ---\n");

    printf("Enter Loan Amount (P): ");
    scanf("%lf", &principal_amount);

    printf("Enter Annual Interest Rate (e.g., 0.10 for 10%%): ");
    scanf("%lf", &annual_rate);

    printf("Enter Time in Years (T): ");
    scanf("%lf", &time_years);

    printf("Enter Interest Type (1 for Simple, 2 for Compound): ");
    scanf("%d", &interest_type);

    total_months = time_years * 12;

    if (time_years > 0 && principal_amount > 0) {
        
        
        if (interest_type == 1) {

            double simple_interest = principal_amount * annual_rate * time_years;
            total_repayment = principal_amount + simple_interest;

            printf("\n--- Simple Interest Calculation ---\n");
            printf("Total Interest Paid: %.2lf\n", simple_interest);


            monthly_installment = total_repayment / total_months;
            
        } else if (interest_type == 2) {

            total_repayment = principal_amount * pow(1.0 + annual_rate, time_years);
            
            printf("\n--- Compound Interest Calculation (Annually) ---\n");
            printf("Total Interest Paid: %.2lf\n", total_repayment - principal_amount);

            monthly_installment = total_repayment / total_months;

        } else {
            printf("\nError: Invalid interest type selected. Please choose 1 or 2.\n");
            return 1;
        }

        printf("Total Repayment Amount: %.2lf\n", total_repayment);
        printf("Your Monthly Installment (EMI) is: Rs. %.2lf\n", monthly_installment);

    } 
    else {
        printf("\nError: Loan Amount and Time in Years must be greater than zero.\n");
    }

    return 0;
}
