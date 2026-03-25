#include <stdio.h>

// Function to find length of string
int strLength(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Function to compare two strings from a given position
int match(char str[], int pos, char find[]) {
    int i = 0;
    while (find[i] != '\0') {
        if (str[pos + i] != find[i])
            return 0;
        i++;
    }
    return 1;
}

// Function to find and replace substring
void findReplace(char src[], char find[], char replace[]) {
    char result[200];
    int i = 0, j = 0, k;

    while (src[i] != '\0') {
        // Check if substring matches
        if (match(src, i, find)) {
            // Copy replacement string
            k = 0;
            while (replace[k] != '\0') {
                result[j++] = replace[k++];
            }
            i += strLength(find); // skip matched part
        } else {
            result[j++] = src[i++];
        }
    }

    result[j] = '\0';

    // Copy result back to source
    i = 0;
    while (result[i] != '\0') {
        src[i] = result[i];
        i++;
    }
    src[i] = '\0';
}

int main() {
    char src[100] = "This is test time";
    char find[20] = "is";
    char replace[20] = "was";

    findReplace(src, find, replace);

    printf("Output: %s\n", src);

    return 0;
}
