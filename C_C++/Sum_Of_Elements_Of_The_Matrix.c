#include <stdio.h>

int main() {
    int mat[12][12];
    int i, j, row, col, sum = 0;

    printf("Enter the number of rows and columns:\n");
    scanf("%d%d", &row, &col);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The elements in the matrix are:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum += mat[i][j];
        }
    }

    printf("\nSum of all the elements of the matrix = %d\n", sum);

    return 0;
}
