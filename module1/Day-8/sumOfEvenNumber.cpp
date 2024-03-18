#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number : " ;
    cin >> number;

    int sum ;

    while(number != 0){
        int digit = number %10;
        sum  += (digit%2 == 0) ? digit : 0;
        number = number/10;
    }
    cout << sum << endl;
    return 0;
}