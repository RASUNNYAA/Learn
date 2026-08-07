#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return n + fibonacci(n - 1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci of of %d + %d + %d + %d + %d = %d\n", n, n-1, n-2, n-3, n-4, fibonacci(n));
    return 0;
}
