#include <stdio.h>

// Function for Binary Search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;  // Find middle index

        if (arr[mid] == key)
            return mid;  // Key found at index mid

        else if (arr[mid] < key)
            low = mid + 1;  // Search in right half
        else
            high = mid - 1; // Search in left half
    }
    return -1;  // Key not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);

    return 0;
}