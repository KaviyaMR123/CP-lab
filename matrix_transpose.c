#include <stdio.h>
#define MAX_SIZE 10  
int main() 
{
    int n;
    printf("Enter the size of the square matrix (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    if (n > MAX_SIZE)
    {
        printf("Size must be less than or equal to %d.\n", MAX_SIZE);
        return 1;
    }
    int matrix[n][n], transpose[n][n];
    int isSymmetric = 1; 
    printf("Enter elements for the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != transpose[i][j])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }
    if (isSymmetric) 
    {
        printf("The matrix is symmetric.\n");
    }
    else 
    {
        printf("The matrix is not symmetric.\n");
        printf("Transpose of the matrix:\n");
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", transpose[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
