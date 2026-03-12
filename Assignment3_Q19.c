#include <stdio.h>

int main() {
    int start, end, i, j;

    // Accept a range (two numbers) from the user
    printf("Enter two numbers for the range (e.g., 3 6): ");
    if (scanf("%d %d", &start, &end) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    // Outer loop for the rows (multipliers 1 to 10)
    for (i = 1; i <= 10; i++) {
        
        // Inner loop to iterate through the numbers in the range
        for (j = start; j <= end; j++) {
            // %4d ensures each number takes up 4 spaces for alignment
            printf("%4d", i * j);
        }
        
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
