#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    int choice;
    float temperature;

    printf("Temperature Conversion Menu:\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
