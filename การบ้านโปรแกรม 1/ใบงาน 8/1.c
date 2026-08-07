#include <stdio.h>

int factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d * %d * %d * %d * %d = %d\n", n, n-1, n-2, n-3, n-4, factorial(n));
    return 0;
}