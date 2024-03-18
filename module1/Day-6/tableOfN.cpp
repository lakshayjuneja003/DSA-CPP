#include <iostream>
using namespace std;

int main (){
    int t ;
    cout << "Enter the table no you wanna print " << endl;
    cin >> t; // for example 19
    for (int i = 1; i<=10; i++){
       cout << t << " * " << i << " = " << (t * i) << endl;
    }
    return 0;
}