#include <stdio.h>

// Function to print character n times
void printChar(char ch, int n) {
    for(int i = 1; i <= n; i++) {
        printf("%c ", ch);
    }
}

int main() {
    char ch;
    int n;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter number of times: ");
    scanf("%d", &n);

    printChar(ch, n);

    return 0;
}
