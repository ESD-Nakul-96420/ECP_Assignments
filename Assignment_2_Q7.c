#include <stdio.h>

// Function to check if a year is a leap year
int is_leap(int year) {
    // b. Using logical operators
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // True, it is a leap year
    } else {
        return 0; // False, it is not a leap year
    }
}

// Function to display number of days in the given year
void display_days(int year) {
    if (is_leap(year)) {
        printf("%d is a leap year and has 366 days.\\n", year);
    } else {
        printf("%d is not a leap year and has 365 days.\\n", year);
    }
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    display_days(year);
    
    // The specific implementations requested:
    printf("\\n--- Specific Implementations ---\\n");
    
    // a. Without using logical operators (using nested if-else)
    printf("a. Without logical operators:\\n");
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year (366 days).\\n", year);
            } else {
                printf("%d is not a leap year (365 days).\\n", year);
            }
        } else {
            printf("%d is a leap year (366 days).\\n", year);
        }
    } else {
        printf("%d is not a leap year (365 days).\\n", year);
    }
    
    // b. Using logical operators (using if-else)
    printf("\\nb. Using logical operators:\\n");
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year (366 days).\\n", year);
    } else {
        printf("%d is not a leap year (365 days).\\n", year);
    }

    // c. Conditional operator
    printf("\\nc. Using conditional (ternary) operator:\\n");
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ?
    printf("%d is a leap year (366 days).\\n", year) :
    printf("%d is not a leap year (365 days).\\n", year);
    
    return 0;
}
