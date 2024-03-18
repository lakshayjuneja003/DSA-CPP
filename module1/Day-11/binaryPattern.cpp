#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter n : ";
    cin >> n;
    int binarynumber = 1;
    for (int i = 1; i <=n ; i++){
        for (int j = 1; j <=i ; j++){
            cout << binarynumber << " ";
            binarynumber = (binarynumber == 0) ? 1 : 0;
        }
        cout << endl;

    }
    return 0;
}