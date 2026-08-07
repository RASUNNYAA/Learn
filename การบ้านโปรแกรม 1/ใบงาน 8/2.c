#include <stdio.h>

int sumton (int n)

{
    if (n == 0)
        return 0;
    else
        return n + sumton(n - 1);
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sumton of 1 + 2 + 3 + ... + %d = %d\n", n, sumton(n));
    return 0;
}
