#include <stdio.h>

// Global error flag
int errorFlag = 0;

// Function to perform division
float divide(int a, int b)
{
    if (b == 0)
    {
        errorFlag = 1;  // Set error flag
        return 0;
    }
    return (float)a / b;
}

int main()
{
    int num1, num2;
    float result;

    // Iteration using loop
    for (int i = 0; i < 3; i++)   // repeat 3 times
    {
        printf("\nEnter numerator: ");
        scanf("%d", &num1);

        printf("Enter denominator: ");
        scanf("%d", &num2);

        result = divide(num1, num2);

        if (errorFlag == 1)
        {
            printf("Error: Division by zero is not allowed!\n");
            errorFlag = 0;  // Reset flag
        }
        else
        {
            printf("Result = %.2f\n", result);
        }
    }

    return 0;
}
