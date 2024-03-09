#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number" << endl;
    cin >> number;

    if(number%5 == 0 && number%3==0){
        cout << "Yes , It is divisble by 5 and 3 " << endl;
    }
    else if(number%5 == 0 || number%3==0){
        cout <<  "No, It will be divisble by any one of them not by both" << endl;
    }
    else{
        cout << "Not divisble by 5 nor by 3" << endl;
    }
    return 0;
}