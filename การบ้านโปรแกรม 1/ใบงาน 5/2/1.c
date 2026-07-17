#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Input [%d] : ", i);
        scanf("%d", &arr[i]);
    }

    return 0;
}
