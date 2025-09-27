#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int second_largest;

    printf("Enter three numbers: \n");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter three integers.\n");
        return 1;
    }   

    if (num1 >= num2 && num1 >= num3)
        if (num2 >= num3)
       { second_largest = num2;
       } else
        { second_largest = num3;
        }
    else if (num2 >= num1 && num2 >= num3)
        if (num1 >= num3)
        { second_largest = num1;
        } else
        { second_largest = num3;
        }
    else
        if (num1 >= num2)
        { second_largest = num1;
        } else
        { second_largest = num2;
        } 

        printf("Second largest number is: %d\n", second_largest);
        return 0;
}