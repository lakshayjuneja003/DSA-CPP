#include <iostream>
using namespace std;
int main(){
    int num1;
    cout << "Enter first number" << endl;
    cin >> num1;
    

    if(num1%2 == 0){
        cout << "Entered number is even" << endl;
    }
    else{
        cout << "ENterd number is not even" << endl;
    }

    return 0;
}