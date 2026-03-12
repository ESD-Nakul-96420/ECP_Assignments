#include <stdio.h>

int main() {
    int n, i, num, count = 0, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n + 1;

    while (count < 5) {
        isPrime = 1;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    return 0;
}
