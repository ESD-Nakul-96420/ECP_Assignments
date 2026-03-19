#include <stdio.h>

void accept(int a[], int n)
{
    int i;
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n)
{
    int i;
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[100], n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    do
    {
        printf("\nMenu\n");
        printf("1. Accept Array Elements\n");
        printf("2. Display Array Elements\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                accept(a, n);
                break;

            case 2:
                display(a, n);
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}
