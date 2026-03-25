#include <stdio.h>

// Function to print Pascal Triangle
void printPascal(int rows) {
    int i, j;
    for(i = 0; i < rows; i++) {
        int c = 1;  // First value is always 1
        
        // Print spaces for formatting
        for(j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        
        // Print values in row
        for(j = 0; j <= i; j++) {
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
        }
        
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    printPascal(n);
    
    return 0;
}
