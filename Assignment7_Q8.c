#include <stdio.h>
#include <string.h>

#define SIZE 5
#define LEN 50

// Function to accept names
void acceptNames(char names[SIZE][LEN])
{
    int i;
    printf("Enter %d names:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%s", names[i]);
    }
}

// Function to sort names
void sortNames(char names[SIZE][LEN])
{
    int i, j;
    char temp[LEN];

    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                // swap strings
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

// Function to display names
void displayNames(char names[SIZE][LEN])
{
    int i;
    printf("\nNames in sorted order:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%s\n", names[i]);
    }
}

int main()
{
    char names[SIZE][LEN];

    acceptNames(names);
    sortNames(names);
    displayNames(names);

    return 0;
}
