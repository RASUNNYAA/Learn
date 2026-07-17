#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    float avg;

    for (int i = 0; i < 5; i++)
    {
        printf("Input [%d] : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / 5;

    printf("Output [");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        if (i < 4)
            printf(" ");
    }
    printf("]\n");
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
