#include <iostream>
using namespace std;
int Count(int arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        count++;
    }
    return count;
}
int main(){
    int arr[] = {1 , 2, 67 , 6 ,7 };
    int size = sizeof(arr)/sizeof(int);

    int result = Count(arr, size);
    cout << "count of all elements of  array is : " << result << endl;
    cout << "Execution Done" << endl;
    return 0;
}