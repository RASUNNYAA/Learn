#include <stdio.h>

void swap(int *x, int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) 
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("You entered number: x = %d and y = %d\n", x, y);

    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    int sum;
    sum = x + y;
    printf("Sum = %d\n", sum);


    return 0;
}