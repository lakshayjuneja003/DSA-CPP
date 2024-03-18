#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter n : ";
    cin >> n;
    int digit;
    for (int i = n; i >0 ; i--){
        digit = 1;
        for (int j = 1; j <=i ; j++){
            cout << digit << " " ;
            digit++;
        }
        cout << endl;

    }
    return 0;
}