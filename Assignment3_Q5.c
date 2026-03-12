#include <stdio.h>

int main()
{
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        factorial = factorial * i;
        printf("%d", i);

        if(i > 1)
            printf(" * ");
    }

    printf(" = %lld", factorial);

    return 0;
}
