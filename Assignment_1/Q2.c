#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nCharacter format: %c", num);
    printf("\nDecimal format  : %d", num);
    printf("\nOctal format    : %o", num);
    printf("\nHexadecimal format: %x", num);

    return 0;
}
