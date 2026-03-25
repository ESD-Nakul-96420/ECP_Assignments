#include <stdio.h>
#include <string.h>

// Function: Decimal → Roman
void decimalToRoman(int num, char *roman) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40,
                    10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC",
                       "L", "XL", "X", "IX", "V", "IV", "I"};

    int i = 0;
    roman[0] = '\0';

    while (num > 0) {
        while (num >= values[i]) {
            strcat(roman, symbols[i]);
            num -= values[i];
        }
        i++;
    }
}

// Helper function for Roman → Decimal
int value(char r) {
    switch (r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

// Function: Roman → Decimal
int romanToDecimal(const char *roman) {
    int total = 0;
    int i;

    for (i = 0; i < strlen(roman); i++) {
        int s1 = value(roman[i]);

        if (i + 1 < strlen(roman)) {
            int s2 = value(roman[i + 1]);

            if (s1 >= s2)
                total += s1;
            else {
                total += (s2 - s1);
                i++;
            }
        } else {
            total += s1;
        }
    }
    return total;
}

// Main function
int main() {
    int choice, num;
    char roman[50];

    printf("1. Decimal to Roman\n");
    printf("2. Roman to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter decimal number: ");
            scanf("%d", &num);
            decimalToRoman(num, roman);
            printf("Roman: %s\n", roman);
            break;

        case 2:
            printf("Enter Roman numeral: ");
            scanf("%s", roman);
            printf("Decimal: %d\n", romanToDecimal(roman));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
