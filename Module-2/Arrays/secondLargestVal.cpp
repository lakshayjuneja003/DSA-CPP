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
int secondMax(int arr[], int size , int max){
    int secondmax = INT_MIN;
    for(int i = 0; i <size ; i++){
        if(arr[i] == max) continue;
        else if(arr[i] > secondmax && arr[i] < max){
            secondmax = arr[i];
        }
    }
    return secondmax;
}
int main(){
    int arr[] = {1 , 2, 67 , 6 ,7 };
    int size = sizeof(arr)/sizeof(int);

    int result = maxval(arr, size);
    cout << "The maximum value in the array is : " << result << endl;
    int result2 = secondMax(arr, size,result);
    cout << "Second  largest value in the array is : "<< result2 << endl;
    cout << "Execution Done" << endl;
    return 0;
}