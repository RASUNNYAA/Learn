#include <stdio.h>

int reverseNumber(int n)
{
    int reverse = 0;

    while (n > 0)
    {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    return reverse;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse number = %d\n", reverseNumber(n));
    return 0;
}
