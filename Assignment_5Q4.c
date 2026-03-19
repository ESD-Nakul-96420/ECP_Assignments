#include <stdio.h>

int findMax(int arr[], int n)
{
    int i, max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int findMin(int arr[], int n)
{
    int i, min = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[100], n, i, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Find Maximum\n");
        printf("2. Find Minimum\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Maximum = %d\n", findMax(arr, n));
                break;

            case 2:
                printf("Minimum = %d\n", findMin(arr, n));
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 3);

    return 0;
}
