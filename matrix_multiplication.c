#include <stdio.h>
#define MAX_SIZE 10  
int main() 
{
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    if (cols1 != rows2) 
    {
        printf("Error: Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }
    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) 
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            product[i][j] = 0;
        }
    }
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++) 
        {
            for (int k = 0; k < cols1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Product of the two matrices:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
