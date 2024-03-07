#include <iostream>
using namespace std;
int main(){
    float pi = 3.14;
    float radius;
    cout << "enter radius of circle";
    cin>> radius;
    float area = pi * radius * radius;
    cout << "Area of circle is : " << area << endl;

    return 0;
}