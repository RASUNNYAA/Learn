#include <stdio.h>

int main(void) 
{
    int x, y, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    sum = x + y;
    printf("Sum = %d\n", sum);

    return 0;
}