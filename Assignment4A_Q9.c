#include <stdio.h>

// Function to check prime number
int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0;  // Not prime

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;  // Not prime
    }

    return 1;  // Prime
}

// Function to print prime numbers in a range
void printPrimes(int start, int end) {
    int i;

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int num, start, end;

    // Check single number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is NOT a Prime number\n", num);

    // Print primes in range
    printf("\nEnter range (start end): ");
    scanf("%d %d", &start, &end);

    printPrimes(start, end);

    return 0;
}
