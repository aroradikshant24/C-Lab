//WAP that reads two matrices A (m x n) and B (p x q) and computes the (a) sum (b) product (c) determinant of A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication. Report appropriate message in case of incompatibility
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void readMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int rowsA, colsA, rowsB, colsB;

    // Read dimensions for matrix A
    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    readMatrix(A, rowsA, colsA);

    // Read dimensions for matrix B
    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
    readMatrix(B, rowsB, colsB);

    // Print input matrices
    printf("Matrix A:\n");
    printMatrix(A, rowsA, colsA);
    printf("Matrix B:\n");
    printMatrix(B, rowsB, colsB);

    // Compute and print sum
    if (rowsA == rowsB && colsA == colsB) {
        addMatrices(A, B, C, rowsA, colsA);
        printf("Sum of A and B:\n");
        printMatrix(C, rowsA, colsA);
    } else {
        printf("Incompatible matrix dimensions for addition.\n");
    }

    // Compute and print product
    if (colsA == rowsB) {
        multiplyMatrices(A, B, C, rowsA, colsA, colsB);
        printf("Product of A and B:\n");
        printMatrix(C, rowsA, colsB);
    } else {
        printf("Incompatible matrix dimensions for multiplication.\n");
    }

    return 0;
}