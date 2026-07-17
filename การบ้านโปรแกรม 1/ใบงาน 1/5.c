#include <stdio.h>

int main(void) 
{
    int x, y, z;
    float avg;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    avg = (x + y + z) / 3.0f;
    printf("Average = %.2f\n", avg);

    return 0;
}