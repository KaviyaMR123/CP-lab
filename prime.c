#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) 
{
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0) return false;
    }
    return true;
}

int main()
{
    int N, count = 0, num = 2;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("The first %d prime numbers are:\n", N);
    while (count < N)
    {
        if (isPrime(num)) 
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}

