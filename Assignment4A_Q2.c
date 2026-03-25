#include <stdio.h>

// Function to calculate power using iteration
int power(int base, int exponent) {
    int result = 1;

    for(int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    return result;
}

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int ans = power(base, exponent);

    printf("Result = %d\n", ans);

    return 0;
}
