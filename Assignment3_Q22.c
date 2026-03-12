#include <stdio.h>

int main()
{
    int i,j;
    char ch;

    printf("\nPattern 1\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPattern 2\n");
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPattern 3\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    printf("\nPattern 4\n");
    for(i=1;i<=5;i++){
        for(j=5;j>=6-i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }

    printf("\nPattern 5\n");
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            if(i+j>=5 && j-i<=3 && i-j<=3 && i+j<=11)
                printf("%c ",'A'+j-1);
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\nPattern 6\n");
    ch='A';
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }

    printf("\nPattern 7\n");
    for(i=0;i<4;i++){
        for(j=i;j<4;j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }

    return 0;
}
