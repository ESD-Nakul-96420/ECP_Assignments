#include <stdio.h>

int main() {
    int quantity;
    float unit_price = 5.0; // Unit price is Rs 5
    float total_price;
    float discount = 0.0;

    // Prompt the user to enter the quantity
    printf("Enter the quantity purchased: ");
    
    // Read the quantity from the keyboard
    if (scanf("%d", &quantity) != 1 || quantity < 0) {
        printf("Invalid input. Please enter a positive integer for quantity.\n");
        return 1;
    }

    // Calculate total price before discount
    total_price = quantity * unit_price;

    // Apply discounts based on quantity using if-else if statements
    if (quantity > 50) {
        // 15 percent discount for quantities over 50
        discount = total_price * 0.15;
    } else if (quantity > 30) {
        // 10 percent discount for quantities over 30
        discount = total_price * 0.10;
    }
    // No discount for quantity <= 30

    total_price = total_price - discount; // Calculate the final price

    // Display the results
    printf("\nUnit Price: Rs %.2f\n", unit_price);
    printf("Quantity: %d\n", quantity);
    printf("Discount Applied: Rs %.2f\n", discount);
    printf("Total Price: Rs %.2f\n", total_price);

    return 0;
}
