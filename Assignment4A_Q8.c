#include <stdio.h>

// Function to return next Fibonacci term
int nextFibonacci() {
    static int a = 0, b = 1;  // static variables retain values between calls
    int next = a + b;

    a = b;
    b = next;

    return a;  // return current term
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", nextFibonacci());
    }

    return 0;
}
