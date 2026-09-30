#include<stdio.h>
#include<stdlib.h>
void multiply_matrices(int **A, int **B, int **C, int rows_A, int cols_A, int cols_B) {
    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_B; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cols_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int rows_A, cols_A, rows_B, cols_B;
    scanf("%d %d", &rows_A, &cols_A);
    scanf("%d %d", &rows_B, &cols_B);

    if (cols_A != rows_B) {
        printf("Matrix multiplication not possible\n");
        return 1;
    }

    int **A = malloc(rows_A * sizeof(int *));
    for (int i = 0; i < rows_A; i++) {
        A[i] = malloc(cols_A * sizeof(int));
        for (int j = 0; j < cols_A; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int **B = malloc(rows_B * sizeof(int *));
    for (int i = 0; i < rows_B; i++) {
        B[i] = malloc(cols_B * sizeof(int));
        for (int j = 0; j < cols_B; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int **C = malloc(rows_A * sizeof(int *));
    for (int i = 0; i < rows_A; i++) {
        C[i] = malloc(cols_B * sizeof(int));
    }

    multiply_matrices(A, B, C, rows_A, cols_A, cols_B);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_B; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows_A; i++) {
        free(A[i]);
        free(C[i]);
    }
    free(A);
    free(C);

    for (int i = 0; i < rows_B; i++) {
        free(B[i]);
    }
    free(B);

    return 0;
}