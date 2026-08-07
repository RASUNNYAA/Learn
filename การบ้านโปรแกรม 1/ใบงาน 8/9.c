#include <stdio.h>

int sumArray(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum = %d\n", sumArray(arr, 5));
    return 0;
}
