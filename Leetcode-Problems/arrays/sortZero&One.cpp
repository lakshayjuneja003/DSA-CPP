#include <iostream>
#include <algorithm> // Required for swap
using namespace std;

void sortOne(int arr[], int size) {
    int i = 0, j = size - 1;
    while (i <= j) {
        if (arr[i] == 0 && i < j) {
            i++;
        } else if (arr[j] == 1 && i < j) {
            j--;
        } 
        if (arr[i] == 1 && arr[j] == 0 && i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        }
    }


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 1, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(int);
    sortOne(arr, size);
    printArray(arr, size);
    return 0;
}
