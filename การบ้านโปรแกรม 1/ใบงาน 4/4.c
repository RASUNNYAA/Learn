#include <stdio.h>

int main()
{
    int n, m, i, j;

    printf("Input N: ");
    scanf("%d", &n);
    printf("Input M: ");
    scanf("%d", &m);

    printf("\n");

for (i = 1; i <= 12; i++)
{
    for (j = n; j <= m; j++)
    {
        printf("| %2d x %2d = %3d ", j, i, j * i);
    }
    printf("|\n");
}
    printf("\n");
    return 0;
}
