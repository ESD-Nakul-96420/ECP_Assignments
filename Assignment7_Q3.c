#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to calculate sum of a given row
int rowSum(int arr[ROWS][COLS], int row) {
    int sum = 0;
    for (int j = 0; j < COLS; j++) {
        sum += arr[row][j];
    }
    return sum;
}

// Function to calculate sum of a given column
int colSum(int arr[ROWS][COLS], int col) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        sum += arr[i][col];
    }
    return sum;
}

int main() {
    int arr[ROWS][COLS];
    int i, j, r, c;

    // Input matrix
    printf("Enter elements of %dx%d matrix:\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Input row number
    printf("Enter row number (0 to %d): ", ROWS - 1);
    scanf("%d", &r);

    // Input column number
    printf("Enter column number (0 to %d): ", COLS - 1);
    scanf("%d", &c);

    // Display results
    printf("Sum of row %d = %d\n", r, rowSum(arr, r));
    printf("Sum of column %d = %d\n", c, colSum(arr, c));

    return 0;
}
