#include <iostream>
using namespace std;

int main(){
    float principal , rate = 0.05 , time ;

    cout << "Enter Principal Amount" << endl;
    cin >> principal;
    cout << "enter rate " << endl;
    cin >> rate;
    cout << "enter time in years" << endl;
    cin >> time;

    float SI = (principal*time * rate) /100;
    cout << SI<< endl;

    return 0;
}