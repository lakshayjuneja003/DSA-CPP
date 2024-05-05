#include <iostream>
using namespace std;
int getSum(int* arr , int n){
    int sum = 0;

    for(int i = 0; i<n ; i++){
    sum+= arr[i];
   }
   return sum;
}
int main(){
    
   char *ch = new char;
   cout << sizeof(ch) ;

   int *arr = new int[5];

   int n;
   cin >> n;
   
    // variable size array using dynamic memory 
   int *arr2 = new int[n];
    // getting values 
   for(int i = 0; i<n ; i++){
    cin >> n;
   }
   // getting sum
   int sum = getSum(arr2,n);
   cout << sum;
    
    return 0;
}