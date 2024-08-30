#include <stdio.h>

main() {
    int rows = 1;
    int i, j;

    for (i = 5; i >= rows; i--) {
        for (j = i; j >rows; j--) {
            printf("  ");
        }
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

