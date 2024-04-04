#include <iostream>

using namespace std;
int pivotElement(int arr[], int n){
        int s = 0;
        int e = n-1;

        int mid = s + (e-s)/2;

        while(s<e){
            if(arr[mid] >= arr[0]){
                s = mid +1;
            }
            else{
                e = mid;
            }
        mid = s + (e-s)/2;
    }
    return s;
}

int BinarySearch(int arr[], int start, int end, int key) {
    int s = start;
    int e = end;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }

    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {7 , 9 , 1, 2, 3};
    int pivot =  pivotElement(arr,5);
    int target = 2;
    if(target >= arr[pivot] && target <= arr[4] ){
        cout << BinarySearch(arr,  pivot , 4 , target);
    }
    else{
        cout << BinarySearch(arr,  0 , pivot , target);

    }
    return 0;
}