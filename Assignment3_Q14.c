#include <stdio.h>

int main() {
    int num, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        printf("%d is not a Prime number", num);
    } 
    else {
        do {
            if(num % i == 0) {
                flag = 1;
                break;
            }
            i++;
        } while(i <= num/2);

        if(flag == 0)
            printf("%d is a Prime number", num);
        else
            printf("%d is not a Prime number", num);
    }

    return 0;
}
