#include <iostream>
using namespace   std;
 int main(){
    int number ;
    cout  << "Enter a number : ";
    cin >>  number;
    bool isTrue = true;

    for(int i = 2; i < number-1; ++i) {
        if (number % i == 0){
            isTrue = false;
        }
        else{
            isTrue = true;
        }
    }
    if (isTrue ==true){
        cout << "prime number" << endl;
    }
    else{
        cout << "not prime ";
        }

    return 0;
 }
