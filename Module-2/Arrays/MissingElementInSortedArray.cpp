#include <iostream>
using namespace std;

int findMissingElement(int arr[], int size){
    int element = arr[0];
    int missingElement;
    for(int i = 0; i<size; i++){
        if(arr[i] == element){
            element++;

        }
        else{
            missingElement = i;
            break;
        }
    }
    return missingElement;
}

int main(){
    int arr[] = {1 , 2, 3 , 5 ,6 };
    int size = sizeof(arr)/sizeof(int);
    int result = findMissingElement(arr, size);
    cout << " Missing elements of sorted array at index is : " << result << endl;
    cout << "Execution Done" << endl;
    return 0;
}