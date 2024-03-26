#include <iostream>
using namespace std;
int sum(int arr[], int size){
    int sumElement = 0;
    for(int i = 0; i < size; i++){
        sumElement += arr[i];
    }
    return sumElement;
}
int main(){
    int arr[] = {1 , 2, 67 , 6 ,7 };
    int size = sizeof(arr)/sizeof(int);

    int result = sum(arr, size);
    cout << "Sum of all elemnts of  array is : " << result << endl;
    cout << "Execution Done" << endl;
    return 0;
}