#include <iostream>
#include <utility>
using namespace std;

void swapAlternate(int arr[], int n) {
    for(int i = 0 ; i <n ; i+=2 ) {
        if(i+1 < n){
            swap(arr[i] , arr[i+1]);
        }
    }
}
void printarray(int arr[], int n) {
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";        
    }
    cout<<endl;
}
int main(){
    int even[] = {2,4,6,8}; // array
    int odd[] = {1,3,5,7}; 
    int evensize = sizeof(even)/sizeof(int);
    printarray(even,evensize);
    swapAlternate(even,evensize);
    printarray(even,evensize);
    
    return 0;
}
