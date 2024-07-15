#include <stdio.h>
int main() 
{
    int m, n;
    printf("Enter the number of rows (m) and columns (n) of the matrix:\n");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int smallest = matrix[0][0];
    int smallestRow = 0;
    int smallestCol = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            if (matrix[i][j] < smallest) 
            {
                smallest = matrix[i][j];
                smallestRow = i;
                smallestCol = j;
            }
        }
    }
    printf("The smallest element in the matrix is %d\n", smallest);
    printf("Position of the smallest element is (%d, %d)\n", smallestRow, smallestCol);
    return 0;
}
