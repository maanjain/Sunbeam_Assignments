
#include <stdio.h>



int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrices cannot be multiplied. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;// False execution on it 
    }

    int a[r1][c1], b[r2][c2], product[r1][c2];

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix to zero
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }


    return 0;
}