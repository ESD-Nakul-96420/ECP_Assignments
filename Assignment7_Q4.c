#include <stdio.h>
#include <string.h>

#define SIZE 5
#define LEN 50

// Function to accept names
void acceptNames(char names[SIZE][LEN]) {
    int i;
    printf("Enter 5 student names:\n");
    for(i = 0; i < SIZE; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], LEN, stdin);

        // Remove newline character
        names[i][strcspn(names[i], "\n")] = '\0';
    }
}

// Function to print names
void printNames(char names[SIZE][LEN]) {
    int i;
    printf("\nStudent Names:\n");
    for(i = 0; i < SIZE; i++) {
        printf("%s\n", names[i]);
    }
}

// Function to sort names (Alphabetical Order)
void sortNames(char names[SIZE][LEN]) {
    int i, j;
    char temp[LEN];

    for(i = 0; i < SIZE - 1; i++) {
        for(j = i + 1; j < SIZE; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                // Swap
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

// Main function
int main() {
    char names[SIZE][LEN];

    acceptNames(names);

    printf("\nBefore Sorting:");
    printNames(names);

    sortNames(names);

    printf("\nAfter Sorting:");
    printNames(names);

    return 0;
}
