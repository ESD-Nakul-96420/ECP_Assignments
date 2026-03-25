#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5
#define MAX_LEN 50

// Function to accept names
void acceptNames(char *names[]) {
    int i;
    for(i = 0; i < SIZE; i++) {
        names[i] = (char *)malloc(MAX_LEN * sizeof(char));
        if(names[i] == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

// Function to print names
void printNames(char *names[]) {
    int i;
    printf("\nStudent Names:\n");
    for(i = 0; i < SIZE; i++) {
        printf("%s\n", names[i]);
    }
}

// Function to sort names (Alphabetical order)
void sortNames(char *names[]) {
    int i, j;
    char *temp;

    for(i = 0; i < SIZE - 1; i++) {
        for(j = i + 1; j < SIZE; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

// Function to free memory
void freeNames(char *names[]) {
    int i;
    for(i = 0; i < SIZE; i++) {
        free(names[i]);
    }
}

int main() {
    char *names[SIZE];

    acceptNames(names);

    printNames(names);

    sortNames(names);

    printf("\nSorted Names:\n");
    printNames(names);

    freeNames(names);

    return 0;
}
