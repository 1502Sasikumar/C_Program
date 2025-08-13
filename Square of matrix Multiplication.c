//Square of matrix(Multiplication)
#include <stdio.h>
#define SIZE 2 

int main()
{
    int matrix[SIZE][SIZE];
    int resultMatrix[SIZE][SIZE];
    int n;
    
    printf("Enter the Square matrix size: ");
    scanf("%d", &n);
    
    printf("Enter the matrix Elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultMatrix[i][j] = 0; 
            for (int k = 0; k < n; k++) {
                resultMatrix[i][j] += matrix[i][k] * matrix[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
