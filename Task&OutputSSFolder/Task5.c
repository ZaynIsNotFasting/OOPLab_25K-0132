#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c;
    double discriminant;
    double root1, root2;
    double realPart, imagPart;

    printf("--- Ultimate Quadratic Equation Solver (ax^2 + bx + c = 0) ---\n");


    printf("Enter coefficient a, b, c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        printf("\nErroneous. If we take a as 0, it'll be a linear equation not a quadratic. \n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    printf("Discriminant (D) = %.2lf\n", discriminant);

    if (discriminant >= 0){

         if (discriminant > 0)
           {
             root1 = (-b + sqrt(discriminant)/(2*a));
             root2 = (-b - sqrt (discriminant)/(2*a));
             printf("Roots are real and different (two different roots).\n");
             printf("Root 1 = %.3lf\n", root1);
             printf("Root 2 = %.3lf\n", root2);
           }
             else {
                 root1 = root2 = -b/(2*a);

                 printf("Roots are real and equal (one repeated root).\n");
                 printf("Root (x1) = Root (x2) = %.3lf\n", root1);
                }
        }
        
    
    else {

             realPart = -b/(2*a);

              imagPart = sqrt(-discriminant)/(2*a);

             printf("Roots are Imaginary (complex roots).\n");
             printf("Root 1 = %.3lf + %.3lfi\n", realPart, imagPart);
             printf("Root 2 = %.3lf - %.3lfi\n", realPart, imagPart);
     }

     return 0;


         
}