#include <iostream>
#include <algorithm>
using namespace std;

void SelectionSort(int arr[], int n) { 
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {8, 3, 5, 7, 4, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    SelectionSort(arr, size);

    cout << "Modified array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
