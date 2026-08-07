#include <stdio.h>

int factorial(int n) 
//factorial(4)* factorial(3)* factorial(2) 
//* factorial(1) = 4 * 3 * 2 * 1 = 24
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n) 
//fibonacci(4) = fibonacci(3) + fibonacci(2) = (fibonacci(2) + fibonacci(1)) 
//= ((1 + 0) + 1) + (1 + 0) = (1 + 1) + (1 + 0) = 2 + 1 = 3
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return n + fibonacci(n - 1);
}

int sumton (int n)
//sumton(1) = 1 + sumton(2) = 1 + 2 + sumton(3) = 1 + 2 + 3 + sumton(4) = 1 + 2 + 3 + 4 = 10
{
    if (n == 0)
        return 0;
    else
        return n + sumton(n - 1);
}

int power(int base, int n)
//power(2, 4) = 2 * power(2, 3) = 2 * 2 * power(2, 2) = 2 * 2 * 2 * power(2, 1) = 2 * 2 * 2 * 2 = 16
{
    if (n == 0)
        return 1;
    else
        return base * power(base, n - 1);
}

int findmax(int data[], int n)
//findmax({5, 8, 7, 9, 11})= 11
{
    if (n == 1)
        return data[0];
    else
    {
        int max = findmax(data, n - 1);
        if (data[n - 1] > max)
            return data[n - 1];
        else
            return max;
    }
}

int main()
{
    int n, base;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the base: ");
    scanf("%d", &base);
    int data[]={5, 8, 7, 9, 11};
    printf("Maximum value in the data is %d\n", findmax(data, 5));
    printf("Factorial of %d is %d\n", n, factorial(n));
    printf("Fibonacci of %d is %d\n", n, fibonacci(n));
    printf("Sumton of %d is %d\n", n, sumton(n));
    printf("Power of %d raised to %d is %d\n", base, n, power(base, n));
    return 0;
}

    