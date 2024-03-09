#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number" << endl;
    cin >> number;

    if(number >= 100 && number<=999){
        cout << "Yes , Its a three digit number" << endl;
    }
    else{
        cout <<  "No, It's not a three digit number" << endl;
    }
    return 0;
}