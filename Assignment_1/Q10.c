#include <stdio.h>
#include <math.h>

int main() {
    // Test cases: (3, 4, 5), (1, 2, 3), (1, 2, 4)
    float a, b, c, perimeter, s, area;
    
    // Test case 1: 3, 4, 5
    a = 3; b = 4; c = 5;
    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("For sides %.0f, %.0f, %.0f:\n", a, b, c);
    printf("  Perimeter = %.2f\n", perimeter);
    printf("  Area = %.2f\n", area);
    
    // Test case 2: 1, 2, 3
    a = 1; b = 2; c = 3;
    perimeter = a + b + c;
    s = perimeter / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("For sides %.0f, %.0f, %.0f:\n", a, b, c);
    printf("  Perimeter = %.2f\n", perimeter);
    printf("  Area = %.2f\n", area);

    // Test case 3: 1, 2, 4
    a = 1; b = 2; c = 4;
    perimeter = a + b + c;
    s = perimeter / 2;
    // The expression inside sqrt will be negative for invalid triangles
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("For sides %.0f, %.0f, %.0f:\n", a, b, c);
    printf("  Perimeter = %.2f\n", perimeter);
    // Observe the result for area (NaN or similar for invalid triangle)
    printf("  Area = %.2f\n", area);

    return 0;
}
