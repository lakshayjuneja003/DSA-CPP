#include <iostream>
using namespace std;
float area(float r){
    return  3.14*r*r;
}
int main(){
    float radius;
    cout  << "Enter the value for radius: ";
    cin >> radius;

    float areaofcircle = area(radius);                               
    cout << "The area of circle is : " << areaofcircle;
    return 0;
}