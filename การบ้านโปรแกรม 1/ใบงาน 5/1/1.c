#include <stdio.h>

int main()
{
    int arr[5] = {0};
    int choice;

    while (1)
    {
        printf("\n===== Menu =====\n");
        printf("1. Insert 5 elements into the array\n");
        printf("2. Display all elements in the array\n");
        printf("3. Display the sum\n");
        printf("4. Display the average\n");
        printf("5. Clear the array to 0\n");
        printf("0. Exit the program\n");
        printf("\n");
        printf("search: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                printf("Input [%d] : ", i);
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            printf("Output : [");
            for (int i = 0; i < 5; i++)
            {
                printf("%d", arr[i]);
                if (i < 4)
                    printf(" ");
            }
            printf("]\n");
            break;

        case 3:
        {
            int sum = 0;
            for (int i = 0; i < 5; i++)
            {
                sum += arr[i];
            }
            printf("Sum : %d\n", sum);
            break;
        }

        case 4:
        {
            int sum = 0;
            for (int i = 0; i < 5; i++)
            {
                sum += arr[i];
            }
            double avg = sum / 5.0;
            printf("Avg : %.1f\n", avg);
            break;
        }

        case 5:
            for (int i = 0; i < 5; i++)
            {
                arr[i] = 0;
            }
            printf("Output : [0 0 0 0 0]\n");
            break;

        case 0:
            printf("Exit the program.\n");
            return 0;

        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}
