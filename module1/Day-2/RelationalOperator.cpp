#include <iostream>
using namespace std;

int main(){
    int num1 = 23;
    int num2 = 22;

    if(num1 == num2){
        cout << "Numbers are equal" << endl;
    }
    else if( num1!= num2){
        cout << "not equal" << endl;
    }
    else {
        cout << "invalid result" << endl ;
    }

    cout << (num1==num2)<< endl;
    cout << (num1!= num2) << endl;

}