#include <iostream>
using namespace std;

int main(){
    int row,col;
    cin >> row >> col;
    // alloacting memory dynamically
   int **arr = new int*[row];

   // creating 2d array
   for(int i = 0; i<row; i++){
    arr[i] = new int[col];
   }

   cout << "Array creation done " ;
   // taking input
   for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
        cin >> arr[row][col];
    }
   }

   // giving output
   for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
        cout << arr[row][col];
    }
   }

    cout << endl;

    for(int i = 0; i<row; i++){
        delete []arr[i];
    }
    delete []arr;
    return 0;
}