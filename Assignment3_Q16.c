#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int magic, guess;
    int chances = 0;

    srand(time(0));              // seed for random number
    magic = rand() % 1000 + 1;   // random number between 1 and 1000

    printf("Guess the Magic Number between 1 and 1000\n");

    while (chances < 10)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        chances++;

        if (guess == magic)
        {
            printf("Congrats! You won.\n");
            break;
        }
        else if (guess < magic)
        {
            printf("Right\n");   // guess is less than magic number
        }
        else
        {
            printf("Left\n");    // guess is greater than magic number
        }

        printf("Chances left: %d\n", 10 - chances);
    }

    if (guess != magic)
    {
        printf("Game Over! The magic number was %d\n", magic);
    }

    return 0;
}
