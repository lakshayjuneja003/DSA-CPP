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
int main() {
    int arr[] = {7 , 9 , 1, 2, 3 };
    int res = pivotElement(arr,5);
    cout << "Pivot Element is : " << res << endl;

    return 0;
}