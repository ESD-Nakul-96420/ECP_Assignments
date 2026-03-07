#include <stdio.h>

int main() {
    char ch;
    int ascii;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Print ASCII values in different formats
    printf("\nASCII value of '%c':\n", ch);
    printf("Decimal: %d\n", ch);
    printf("Hexadecimal: %x\n", ch);
    printf("Octal: %o\n", ch);

    // Input ASCII value
    printf("\nEnter an ASCII value: ");
    scanf("%d", &ascii);

    // Print corresponding character
    printf("Character for ASCII value %d is: %c\n", ascii, ascii);

    return 0;
}
