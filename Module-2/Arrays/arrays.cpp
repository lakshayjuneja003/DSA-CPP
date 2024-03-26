#include <iostream>
using namespace std;
void findlessthan35(int arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] < 35){
            cout << "Number is less than 35 at index : "<< i  << endl;
        }
    }
}
int main(){
    int arr[] = {1 , 2, 67 , 6 ,7 };
    int size = sizeof(arr)/sizeof(int);

    findlessthan35(arr, size);
    cout << "Execution Done" << endl;
    return 0;
}