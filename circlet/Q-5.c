
int main() {
    int rows = 5;


    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }


        for (int k = rows - i; k <= rows; k++) {
            printf("%d ", k);
        }


        for (int k = rows - 1; k >= rows - i; k--) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
