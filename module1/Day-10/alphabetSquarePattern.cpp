#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <=n ; i++){
        char alphabet = 'A';
        for (int j = 1; j <=n ; j++){
            cout << alphabet  << " ";
            alphabet++;
        }
        cout << endl;

    }
    return 0;
}