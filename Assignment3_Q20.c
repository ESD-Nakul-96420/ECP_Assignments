#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, num, temp, rem, sum;

    // Prime numbers between 1 and 100
    printf("Prime numbers between 1 and 100:\n");
    for(i = 2; i <= 100; i++)
    {
        int prime = 1;

        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
        {
            printf("%d ", i);
        }
    }

    // Armstrong numbers between 1 and 500
    printf("\n\nArmstrong numbers between 1 and 500:\n");
    for(i = 1; i <= 500; i++)
    {
        num = i;
        sum = 0;

        while(num != 0)
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
