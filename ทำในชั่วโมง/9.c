#include <stdio.h>

void input_array(int arr[], int size);
void print_array(int arr[], int size);

int main()
{
    int numbers[5] = {0};
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Enter 5 array values\n");
        printf("2. Show all array values\n");
        printf("0. Exit program\n");
        printf("Choose option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                input_array(numbers, 5);
                break;
            case 2:
                print_array(numbers, 5);
                break;
            case 0:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid option. Please choose again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}

void input_array(int arr[], int size)
{
    printf("Enter 5 integer values:\n");
    for (int i = 0; i < size; i++) {
        printf("Input %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int size)
{
    printf("Array values:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
