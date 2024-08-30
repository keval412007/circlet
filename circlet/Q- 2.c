#include <stdio.h>

int main() {
    int start = 11;
    int end = 20;
    int num = start;

    int rows = 0;
    int temp = start;
    while (temp <= end) {
        rows++;
        temp += rows;
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (num <= end) {
                printf("%d ", num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}

