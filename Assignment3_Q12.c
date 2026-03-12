#include <stdio.h>

int main() {
    int base, index, i;
    int power = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter index: ");
    scanf("%d", &index);

    for(i = 1; i <= index; i++) {
        power = power * base;
    }

    printf("Output: %d\n", power);

    return 0;
}
