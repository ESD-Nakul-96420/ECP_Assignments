A) If-else implementation

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt user for input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check conditions to find the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The maximum number is: %d\\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The maximum number is: %d\\n", num2);
    } else {
        printf("The maximum number is: %d\\n", num3);
    }

    return 0;
}
 
B)Conditional operator implementation

#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Prompt user for input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use nested conditional operators to find the maximum
    max = (num1 >= num2 && num1 >= num3) ? num1 : (num2 >= num1 && num2 >= num3) ? num2 : num3; [8]

    // Print the result
    printf("The maximum number is: %d\\n", max);

    return 0;
}
