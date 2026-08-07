#include <stdio.h>

int multiply(int a, int b)
{
    if (b == 0 || a == 0)
        return 0;
    return a + multiply(a, b - 1);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Result = %d\n", multiply(a, b));
    return 0;
}
