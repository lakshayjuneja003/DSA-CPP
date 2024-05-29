#include <iostream>
using namespace std;

// Function to recursively perform selection sort
void selectionSort(int arr[], int n, int index) {
  // Base case: if the index is at the last element, return
  if (index == n - 1) {
    return;
  }

  // Find the minimum element in the unsorted part of the array
  int arrMinIndex = index;
  for (int i = index + 1; i < n; i++) {
    if (arr[i] < arr[arrMinIndex]) {
      arrMinIndex = i;
    }
  }

  // Swap the found minimum element with the first element of the unsorted part
  if (arrMinIndex != index) {
    swap(arr[arrMinIndex], arr[index]);
  }

  // Recursively call selection sort on the remaining unsorted part
  selectionSort(arr, n, index + 1);
}

int main() {
  int arr[] = {1, 4, 6, 3, 2, 8, 2};
  int size = sizeof(arr) / sizeof(int);

  // Call the selection sort function
  selectionSort(arr, size, 0);

  // Print the sorted array
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
