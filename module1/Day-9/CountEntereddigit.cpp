#include <iostream>
using  namespace std;

int main(){
    int n;
    cout << "Enter a digit" << endl;
    cin >> n;

    int digits = 0;
    while(n>0){
        int digit = n%10;
        if (digit) digits++;
        n /= 10;
    }
    cout << digits << endl;
    return 0;
}