#include <stdio.h>
int main() 
{
    int n, key, result = -1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key)
        {
            result = i; 
            break; 
        }
    }
    if (result != -1) 
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found in the array\n");
    }
    return 0;
}
