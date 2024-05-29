#include <iostream>

using namespace std;

void BubbleSort(int arr[], int n, int index) {
    // Base case: If the index reaches n-1, the array is sorted
    if (index == n - 1) {
        return;
    }

    // Flag to check if any swapping happens in this pass
    bool swapped = false;

    // Perform a pass of Bubble Sort
    for (int i = 0; i < n - 1 - index; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            swapped = true;
        }
    }

    // If no swapping happened, the array is already sorted
    if (!swapped) {
        return;
    }

    // Recursion for the next pass
    BubbleSort(arr, n, index + 1);
}

int main() {
    int arr[] = {1, 5, 7, 8, 6, 3, 12, 0};
    int size = sizeof(arr) / sizeof(int);

    BubbleSort(arr, size, 0);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
