#include <stdio.h>

// Global variables
int sum, product;

// Function to calculate sum and product
void calculate(int a, int b)
{
    sum = a + b;
    product = a * b;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    calculate(x, y);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}



// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);   // Passing addresses

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
