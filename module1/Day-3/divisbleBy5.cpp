#include <iostream>
using namespace std;
int main(){
    int num1;
    cout << "Enter first number" << endl;
    cin >> num1;
    

    if(num1%5 == 0){
        cout << "Entered number is divisble by 5" << endl;
    }
    else{
        cout << "ENterd number is not divisble by 5" << endl;
    }

    return 0;
}