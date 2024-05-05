#include <iostream>
using namespace std;

int main(){
    int i = 55;
    int& ref = i;

    cout << ref << " " << i << endl;
    ref++;
    i++;
    cout << ref << " " << i << endl;


    
}