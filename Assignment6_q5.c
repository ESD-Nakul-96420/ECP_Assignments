#include <stdio.h>
#include <ctype.h>

int my_atoi(const char *str)
{
    int result = 0;
    int sign = 1;

    // Skip leading whitespaces
    while (*str == ' ' || *str == '\t' || *str == '\n')
        str++;

    // Handle optional sign
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    // Convert digits to integer
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}
