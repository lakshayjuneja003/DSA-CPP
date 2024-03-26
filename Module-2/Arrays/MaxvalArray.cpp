#include <iostream>
using namespace std;
int maxval(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[] = {1 , 2, 67 , 6 ,7 };
    int size = sizeof(arr)/sizeof(int);

    int result = maxval(arr, size);
    cout << "The maximum value in the array is : " << result << endl;
    cout << "Execution Done" << endl;
    return 0;
}