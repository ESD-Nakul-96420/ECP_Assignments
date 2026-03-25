#include <stdio.h>

void removeChar(char *str, char ch) {
    int i, j = 0;

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ch) {
            str[j++] = str[i];  // keep character
        }
    }
    str[j] = '\0';  // terminate new string
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to remove: ");
    scanf(" %c", &ch);

    removeChar(str, ch);

    printf("String after removal: %s\n", str);

    return 0;
}
