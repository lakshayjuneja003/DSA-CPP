#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <=n ; i++){
        int sum = 1;
        for (int j = 1; j <=i ; j++){
            cout << sum << " " ;
            sum+=2;
        }
        cout << endl;
    }
    return 0;
}
