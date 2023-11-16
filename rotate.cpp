#include <iostream>

void rotateArray(int arr[], int n, int k) {
    // Create a temporary array to store elements to be rotated
    int temp[k];
    
    // Copy the first k elements to the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements in the original array to the left
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Copy the elements from the temporary array back to the original array
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Number of positions to rotate

    rotateArray(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
