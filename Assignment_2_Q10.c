#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
        printf("ALPHABET\n");

        if (c >= 65 && c <= 90)
            printf("UPPERCASE\n");
        else
            printf("LOWERCASE\n");
    }
    else if (c >= 48 && c <= 57) {
        printf("DIGIT\n");
    }
    else if (c == 32 || c == 9 || c == 10 || c == 13) {
        printf("SPACE\n");
    }
    else {
        printf("OTHER\n");
    }

    return 0;
}
