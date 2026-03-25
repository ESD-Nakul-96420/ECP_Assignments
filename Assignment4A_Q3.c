#include <stdio.h>

// Function to perform calculation
float calculator(float a, float b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if(b != 0)
                return a / b;
            else {
                printf("Error: Division by zero!\n");
                return 0;
            }
        default:
            printf("Invalid operator!\n");
            return 0;
    }
}

int main() {
    float num1, num2, result;
    char op;
    char choice;

    do {
        printf("\nEnter first number: ");
        scanf("%f", &num1);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        scanf("%f", &num2);

        result = calculator(num1, num2, op);
        printf("Result = %.2f\n", result);

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');  // Iteration

    return 0;
}
