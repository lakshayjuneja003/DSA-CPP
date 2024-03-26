#include <iostream>
using namespace std;
void linearSearch(int arr[], int size , int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            cout << "Number is found at index : "<< i  << endl;
        }
    }
}
int main(){
    int arr[] = {1 , 2, 67 , 6 ,7 };
    int size = sizeof(arr)/sizeof(int);
    int target = 6;
    linearSearch(arr, size, target);
    cout << "Execution Done" << endl;
    return 0;
}