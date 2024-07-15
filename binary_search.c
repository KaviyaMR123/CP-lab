#include <stdio.h>
int main() 
{
    int n, key, left, right, mid, result = -1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array (sorted in ascending order):\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    left = 0;
    right = n - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2; 
        if (arr[mid] == key) 
        {
            result = mid;  
            break;  
        } 
        else if (arr[mid] < key)
        {
            left = mid + 1;  
        } 
        else 
        {
            right = mid - 1; 
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
