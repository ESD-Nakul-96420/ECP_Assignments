#include <stdio.h>

void printWords(int num) {
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five",
                    "Six", "Seven", "Eight", "Nine", "Ten",
                    "Eleven", "Twelve", "Thirteen", "Fourteen",
                    "Fifteen", "Sixteen", "Seventeen",
                    "Eighteen", "Nineteen"};

    char *tens[] = {"", "", "Twenty", "Thirty", "Forty",
                    "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num == 0) {
        printf("Zero");
        return;
    }

    if (num >= 1000) {
        printf("%s Thousand ", ones[num / 1000]);
        num %= 1000;
    }

    if (num >= 100) {
        printf("%s Hundred ", ones[num / 100]);
        num %= 100;
    }

    if (num >= 20) {
        printf("%s ", tens[num / 10]);
        num %= 10;
    }

    if (num > 0) {
        printf("%s", ones[num]);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printWords(num);

    return 0;
}
