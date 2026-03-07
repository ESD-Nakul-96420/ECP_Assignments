#include <stdio.h>

int main() {
    int n, d1, d2, d3, d4;

    printf("Enter a 4 digit number: ");
    scanf("%d", &n);

    if (n < 1000 || n > 9999) {
        printf("Invalid input. Please enter a 4 digit number.\\n");
        return 1;
    }

    // Extract digits
    d1 = n / 1000;
    d2 = (n / 100) % 10;
    d3 = (n / 10) % 10;
    d4 = n % 10;

    // a. Display face value of each decimal digit
    printf("a. Face values: %d %d %d %d\\n", d1, d2, d3, d4);

    // b. Display place value of each decimal digit
    printf("b. Place values: %d = %d + %d + %d + %d\\n", n, d1 * 1000, d2 * 100, d3 * 10, d4 * 1);

    // c. Display no in reverse order by changing decimal place values (as a number)
    int reversed_n = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    printf("c. Reversed number: %d\\n", reversed_n);

    return 0;
}
