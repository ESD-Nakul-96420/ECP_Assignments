#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, j;
    
    // If no names are passed
    if (argc < 2)
    {
        printf("No names provided.\n");
        return 0;
    }

    // 2D array to store names (max 50 names, each up to 50 chars)
    char names[50][50];

    // Copy command line arguments into 2D array
    for (i = 1; i < argc; i++)
    {
        strcpy(names[i - 1], argv[i]);
    }

    // Display names
    printf("List of Names:\n");
    for (i = 0; i < argc - 1; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
