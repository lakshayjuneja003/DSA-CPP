#include <iostream>
using namespace std;
int Count(int arr[], int size){
    int prod = 0;
    for(int i = 0; i < size; i++){
        prod*=arr[i];
    }
    return prod;
}
int main(){
    int arr[] = {1 , 2, 67 , 6 ,7 };
    int size = sizeof(arr)/sizeof(int);

    int result = Count(arr, size);
    cout << "product of all elements of  array is : " << result << endl;
    cout << "Execution Done" << endl;
    return 0;
}