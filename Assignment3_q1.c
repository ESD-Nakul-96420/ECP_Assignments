#include <stdio.h>

int main()
{
    char ch;
    int n, i = 1;

    printf("Enter Character: ");
    scanf(" %c", &ch);

    printf("Enter Number: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("%c", ch);
        i++;
    }

    return 0;
}
