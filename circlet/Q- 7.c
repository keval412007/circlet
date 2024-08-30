#include <stdio.h>

int main() {
    int rows = 5;


    for (int i = 1; i <= rows; i++) {

        if (i == 1 || i == 3) {

            for (int j = 1; j <= rows; j++) {
                printf("* ");
            }
        } else if (i == 2) {

            printf("* ");
            for (int j = 2; j < rows; j++) {
                printf("  ");
            }
            printf("* ");
        } else if (i == 4 || i == 5) {

            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

