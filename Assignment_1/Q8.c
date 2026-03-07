#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    // Prompt the user to enter three integers
    printf("Enter three integer numbers: ");
    
    // Read the three integers from the user input
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the average.
    // (num1 + num2 + num3) is an integer operation.
    // Casting one of the numbers (or the result of the sum) to float 
    // ensures the division results in a floating-point number for a precise average.
    average = (float)(num1 + num2 + num3) / 3;

    // Display the result with two decimal places for clarity
    printf("The average of %d, %d, and %d is: %.2f\n", num1, num2, num3, average);

    return 0;
}
