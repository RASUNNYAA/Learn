#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Input [%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Output : [");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
        if (i < 4)
        {
            printf(" ");
        }
    }
    printf("]\n");

    return 0;
}
