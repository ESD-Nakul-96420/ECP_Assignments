#include <stdio.h>

// Function for linear search
int* linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return &arr[i];   // return address of found element
        }
    }
    return NULL;  // element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter number to search: ");
    scanf("%d", &key);

    int *result = linearSearch(arr, size, key);

    if (result != NULL) {
        printf("Element found at address: %p\n", result);
        printf("Value at that address: %d\n", *result);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}
