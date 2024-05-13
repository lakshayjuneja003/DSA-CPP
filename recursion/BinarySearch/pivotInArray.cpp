#include <iostream>
using namespace std;

int pivotElement(int arr[], int s, int e, int n) {
    // base case
    if (s > e) {
        return -1;
    }

    int mid = s + (e - s) / 2;
    int next = (mid + 1) % n; // Handle wrap-around

    if (arr[mid] > arr[next]) {
        return next;
    } else if (arr[s] <= arr[mid]) {
        return pivotElement(arr, mid + 1, e, n);
    } else {
        return pivotElement(arr, s, mid - 1, n);
    }
}

int main() {
    int arr[] = {7, 9, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = pivotElement(arr, 0, size - 1, size);
    cout << "Pivot Element is : " << res << endl;

    return 0;
}
