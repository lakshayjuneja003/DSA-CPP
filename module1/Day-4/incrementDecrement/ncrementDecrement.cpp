#include <iostream>
using namespace std;

int main(){
    // i++ or i = i+1 or i+=1 or ++1  all are same
    // i++ - post increment 
    // ++i - preincrement
    int a=5;
    cout << "Value of a before increment " << a << endl;
    a++;
    cout  << "Value of a after post increment " << a<<endl;
    cout << "value before pre increment" << a << endl;
    ++a ;
    cout  <<"Value of a after pre increment " << a<<endl;
    //  same with i--
    cout << (--a)  << endl;
    cout << a-- << endl;
    cout << a;
}