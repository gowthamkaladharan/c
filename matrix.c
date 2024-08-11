#include <stdio.h>

void rotateMatrix(int matrix[3][3]) {
    int transposedMatrix[3][3];
    
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposedMatrix[i][j] = matrix[j][i];
        }
    }
    
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = transposedMatrix[2 - j][i];
        }
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    
    printf("Original Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    rotateMatrix(matrix);
    
    printf("Rotated Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;  
}
