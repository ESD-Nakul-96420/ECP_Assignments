#include <stdio.h>

#define MAX 100

// Function to accept 2D array
void acceptArray(int arr[MAX][MAX], int rows, int cols)
{
    int i, j;
    printf("Enter elements of the array:\n");
    
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to print 2D array
void printArray(int arr[MAX][MAX], int rows, int cols)
{
    int i, j;
    printf("\nArray elements are:\n");
    
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main()
{
    int arr[MAX][MAX];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    acceptArray(arr, rows, cols);
    printArray(arr, rows, cols);

    return 0;
}
