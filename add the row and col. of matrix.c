#include <stdio.h>

int main() {
    int i, j, rows, cols, mat[10][10];
    int rowSum, colSum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

  
    for (i = 0; i < rows; i++) {
        rowSum = 0;
        for (j = 0; j < cols; j++) {
            rowSum += mat[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

   
    for (j = 0; j < cols; j++) {
        colSum = 0;
        for (i = 0; i < rows; i++) {
            colSum += mat[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
