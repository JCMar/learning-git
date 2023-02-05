#include <stdio.h>

void numberFormat(int x);
void matrixFormat(int m, int n, int matrix[][n]);

int main() { 
    int A[3][3] = {{6, 9, 21}, {112, 4, 56}, {71, 401, 5}};
    int B[3][2] = {{25, 9}, {341, 16}, {5, 1}};
    int C[4][5] = {{3, 9, 13, 532, 0}, {42, 23, 1, 52, 6}, {65, 49, 13, 8, 87}, {1, 9, 2, 32, 3}};
    matrixFormat(sizeof(A)/sizeof(A[0]), sizeof(A[0])/4, A);
    matrixFormat(sizeof(B)/sizeof(B[0]), sizeof(B[0])/4, B);
    matrixFormat(sizeof(C)/sizeof(C[0]), sizeof(C[0])/4, C);
    // printf("%d %d", sizeof(A)/sizeof(A[0]), sizeof(A[0])/4);
    return 0;
}
void numberFormat(int value) {
    int l = 5, w = 0, x = 10;
    while(!(value >= w && value < x)) {
        if(w == 0) {
            w++;
        }
        l--;
        w *= 10;
        x *= 10;
    }
    for(int i=0; i<l; ++i) {
        printf(" ");
    }
    // printf("Q");

    // printf("%d[%d]", x, l);
    printf("%d", value);
}

void matrixFormat(int m, int n, int matrix[m][n]) {
    printf("\n");
    for(int i=0; i<m; ++i) {
        for(int j=0; j<n; ++j) {
            numberFormat(matrix[i][j]);
        }
        printf("\n");
    }
}

