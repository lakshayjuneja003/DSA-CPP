#include <iostream>
using namespace std;
int main(){
    int number1 , number2 , number3;
    cout << "Enter first number" << endl;
    cin >> number1;
    cout << "Enter second number" << endl;
    cin >> number2;
    cout << "Enter third number" << endl;
    cin >> number3;


    if(number1>number2){
        if(number1>number3){
        cout << "number 1 is greater" << endl;
        }
        else {
            cout << "number 3 is greater" << endl;
        }
    }
    else if (number2 > number3){
        if(number2 > number3){
            cout << "number 2 is greater" << endl;
        }
        else{
            cout << "number 3 is graeter" << endl;
        }
    }
    else{
        cout << "number 3 is greater" << endl;
    }
    return 0;
}