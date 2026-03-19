#include <stdio.h>

int main()
{
    int marks[5];
    int i, total = 0;
    float average;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    average = total / 5.0;

    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f", average);

    return 0;
}
