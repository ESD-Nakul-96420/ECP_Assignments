#include <stdio.h>

// Function prototype
int calculator(float a, float b, char op, float *result);

int main()
{
    float num1, num2, res;
    char op;
    int error;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    error = calculator(num1, num2, op, &res);

    if (error == 0)
        printf("Result = %.2f\n", res);
    else
        printf("Error: Division by zero!\n");

    return 0;
}

// Function definition
int calculator(float a, float b, char op, float *result)
{
    switch (op)
    {
        case '+':
            *result = a + b;
            return 0;

        case '-':
            *result = a - b;
            return 0;

        case '*':
            *result = a * b;
            return 0;

        case '/':
            if (b == 0)
                return 1;   // Error: division by zero
            *result = a / b;
            return 0;

        default:
            return 2;       // Error: invalid operator
    }
}
