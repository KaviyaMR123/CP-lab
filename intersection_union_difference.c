#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100  
int main() 
{
    int A[MAX_SIZE], B[MAX_SIZE], unionSet[MAX_SIZE], intersectionSet[MAX_SIZE], differenceSet[MAX_SIZE];
    int sizeA, sizeB;
    int unionSize = 0, intersectionSize = 0, differenceSize = 0;
    bool found;
    printf("Enter the number of elements in set A: ");
    scanf("%d", &sizeA);
    printf("Enter the elements of set A:\n");
    for (int i = 0; i < sizeA; i++) 
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the number of elements in set B: ");
    scanf("%d", &sizeB);
    printf("Enter the elements of set B:\n");
    for (int i = 0; i < sizeB; i++) 
    {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < sizeA; i++) 
    {
        unionSet[unionSize++] = A[i]; 
    }
    for (int i = 0; i < sizeB; i++) 
    {
        found = false;
        for (int j = 0; j < sizeA; j++) 
        {
            if (B[i] == A[j]) 
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            unionSet[unionSize++] = B[i]; 
        }
    }
    for (int i = 0; i < sizeA; i++) 
    {
        for (int j = 0; j < sizeB; j++)
        {
            if (A[i] == B[j])
            {
                found = false;
                for (int k = 0; k < intersectionSize; k++)
                {
                    if (intersectionSet[k] == A[i])
                    {
                        found = true;
                        break;
                    }
                }
                if (!found) 
                {
                    intersectionSet[intersectionSize++] = A[i]; 
                }
            }
        }
    }
    for (int i = 0; i < sizeA; i++) 
    {
        found = false;
        for (int j = 0; j < sizeB; j++) 
        {
            if (A[i] == B[j]) 
            {
                found = true;
                break;
            }
        }
        if (!found) 
        {
            differenceSet[differenceSize++] = A[i]; 
        }
    }
    printf("Union of A and B (A ∪ B):\n");
    for (int i = 0; i < unionSize; i++) 
    {
        printf("%d ", unionSet[i]);
    }
    printf("\n");
    printf("Intersection of A and B (A ∩ B):\n");
    for (int i = 0; i < intersectionSize; i++) 
    {
        printf("%d ", intersectionSet[i]);
    }
    printf("\n");
    printf("Difference of A and B (A - B):\n");
    for (int i = 0; i < differenceSize; i++) 
    {
        printf("%d ", differenceSet[i]);
    }
    printf("\n");
    return 0;
}
