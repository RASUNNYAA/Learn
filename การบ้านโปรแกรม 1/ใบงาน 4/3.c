#include <stdio.h>

int main()
{
    int n, i;

    printf("Input N: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= 12; i++)
    {
        printf("%2d x %2d = %3d\n", n, i, n * i);
    }
    printf("\n");
    return 0;
}
