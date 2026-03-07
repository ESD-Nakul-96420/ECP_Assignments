#include <stdio.h>
#include <limits.h>

int main() {
    printf("Ranges determined from standard headers:\n");
    printf("----------------------------------------\n");
    printf("char: [%d to %d]\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char: [%d to %d]\n", 0, UCHAR_MAX);
    printf("short int: [%d to %d]\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int: [%d to %d]\n", 0, USHRT_MAX);
    printf("int: [%d to %d]\n", INT_MIN, INT_MAX);
    printf("unsigned int: [%u to %u]\n", 0, UINT_MAX);
    printf("long int: [%ld to %ld]\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int: [%lu to %lu]\n", 0, ULONG_MAX);
    return 0;
}
