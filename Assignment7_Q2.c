#include <stdio.h>

#define SIZE 3

// Function for matrix addition
void addMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function for matrix subtraction
void subtractMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function for matrix multiplication
void multiplyMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for(int k = 0; k < SIZE; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE];
    int add[SIZE][SIZE], sub[SIZE][SIZE], mul[SIZE][SIZE];

    printf("Enter elements of Matrix A (3x3):\n");
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B (3x3):\n");
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            scanf("%d", &B[i][j]);

    addMatrix(A, B, add);
    subtractMatrix(A, B, sub);
    multiplyMatrix(A, B, mul);

    printf("\nAddition of matrices:\n");
    displayMatrix(add);

    printf("\nSubtraction of matrices:\n");
    displayMatrix(sub);

    printf("\nMultiplication of matrices:\n");
    displayMatrix(mul);

    return 0;
}
