// Task#07
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("\n");

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\n");

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("%c ", 'A' + j - 1);
        printf("\n");
    }

    return 0;
}
