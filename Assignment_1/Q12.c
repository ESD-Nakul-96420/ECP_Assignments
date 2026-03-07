#include <stdio.h>
#include <float.h>

int main() {
    printf("Ranges for floating-point types:\\n");
    printf("Float: Min = %e, Max = %e\\n", FLT_MIN, FLT_MAX);
    printf("Double: Min = %e, Max = %e\\n", DBL_MIN, DBL_MAX);
    printf("Long Double: Min = %e, Max = %e\\n", LDBL_MIN, LDBL_MAX);
    return 0;
}
