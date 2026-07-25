#include <stdio.h>

#define SIZE 5

void insertElements(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("Input [%d] : ", i);
        scanf("%d", &arr[i]);
    }
}

void displayElements(int arr[]) {
    printf("Output : [");
    for (int i = 0; i < SIZE; i++) {
        printf("%d", arr[i]);
        if (i < SIZE - 1) printf(" ");
    }
    printf("]\n");
}

void calculateSum(int arr[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    printf("Sum : %d\n", sum);
}

void calculateAverage(int arr[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    float average = (float)sum / SIZE;
    printf("Avg : %.1f\n", average);
}

void clearElements(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 0;
    }
}

void displayMenu() {
    printf("\n--- Menu ---\n");
    printf("1. Insert 5 elements\n");
    printf("2. Display all elements\n");
    printf("3. Display sum\n");
    printf("4. Display average\n");
    printf("5. Clear all elements\n");
    printf("0. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int arr[SIZE] = {0};
    int choice;
    
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insertElements(arr);
                break;
            case 2:
                displayElements(arr);
                break;
            case 3:
                calculateSum(arr);
                break;
            case 4:
                calculateAverage(arr);
                break;
            case 5:
                clearElements(arr);
                displayElements(arr);
                break;
            case 0:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
