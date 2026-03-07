#include <stdio.h>

int main() {
    long a, b;

    printf("Enter first number: ");
    scanf("%ld", &a);

    printf("Enter second number: ");
    scanf("%ld", &b);

    printf("\nSum = %ld", a + b);
    printf("\nDifference = %ld", a - b);
    printf("\nProduct = %ld\n", a * b);

    return 0;
}
