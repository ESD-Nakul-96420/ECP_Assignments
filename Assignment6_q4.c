#include <stdio.h>

// Function to check if a character exists in string1
int isPresent(char ch, char str1[]) {
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == ch)
            return 1;  // found
        i++;
    }
    return 0;  // not found
}

// Function to remove characters of string1 from string2
void removeChars(char str1[], char str2[]) {
    int i = 0, j = 0;

    while (str2[i] != '\0') {
        if (!isPresent(str2[i], str1)) {
            str2[j] = str2[i];
            j++;
        }
        i++;
    }
    str2[j] = '\0';  // terminate new string
}

int main() {
    char str1[100], str2[100];

    printf("Enter string1: ");
    scanf("%s", str1);

    printf("Enter string2: ");
    scanf("%s", str2);

    removeChars(str1, str2);

    printf("Resulting string2: %s\n", str2);

    return 0;
}
