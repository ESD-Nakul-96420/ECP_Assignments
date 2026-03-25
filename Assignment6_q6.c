#include <stdio.h>
#include <stdlib.h>

char* itoa(int value, char *str, int base)
{
    int i = 0;
    int isNegative = 0;

    // Handle invalid base
    if (base < 2 || base > 36) {
        str[0] = '\0';
        return str;
    }

    // Handle 0 explicitly
    if (value == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    // Handle negative numbers (only for base 10)
    if (value < 0 && base == 10) {
        isNegative = 1;
        value = -value;
    }

    // Convert number to string (in reverse order)
    while (value != 0) {
        int remainder = value % base;

        if (remainder > 9)
            str[i++] = (remainder - 10) + 'A'; // For A-Z
        else
            str[i++] = remainder + '0';

        value = value / base;
    }

    // Add minus sign if needed
    if (isNegative)
        str[i++] = '-';

    str[i] = '\0';

    // Reverse the string
    int start = 0, end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    return str;
}
