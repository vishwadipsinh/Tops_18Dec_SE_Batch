/*
5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
*/
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort_ascending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void bubble_sort_descending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void display_array(int arr[], int n) {
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    printf("Enter %d elements for the first array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter %d elements for the second array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    int choice;

    printf("Enter sorting choice:\n");
    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            bubble_sort_ascending(array1, size);
            bubble_sort_ascending(array2, size);
            break;

        case 2:
            bubble_sort_descending(array1, size);
            bubble_sort_descending(array2, size);
            break;

        default:
            printf("Invalid choice\n");
            return 1; // Exit with an error code
    }

    printf("\nSorted Arrays:\n");
    printf("Array 1: ");
    display_array(array1, size);
    printf("Array 2: ");
    display_array(array2, size);

    return 0;
}
