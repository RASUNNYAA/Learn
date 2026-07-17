#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("You entered number: x = %d and y = %d\n", x, y); 

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
