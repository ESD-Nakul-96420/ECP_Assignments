#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for 2D matrix
int** allocateMatrix(int rows, int cols) {
    int **matrix;
    int i;

    // Allocate memory for row pointers
    matrix = (int**)malloc(rows * sizeof(int*));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // Allocate memory for each row
    for (i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed!\n");
            return NULL;
        }
    }

    return matrix;
}

// Function to free allocated memory
void freeMatrix(int **matrix, int rows) {
    int i;

    for (i = 0; i < rows; i++) {
        free(matrix[i]);  // Free each row
    }

    free(matrix);  // Free row pointers
}

// Function to input matrix
void inputMatrix(int **matrix, int rows, int cols) {
    int i, j;
    printf("Enter elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int **matrix, int rows, int cols) {
    int i, j;
    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int rows, cols;
    int **matrix;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    matrix = allocateMatrix(rows, cols);
    if (matrix == NULL)
        return 1;

    inputMatrix(matrix, rows, cols);
    displayMatrix(matrix, rows, cols);

    freeMatrix(matrix, rows);

    return 0;
}
