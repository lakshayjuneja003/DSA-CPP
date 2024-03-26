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
    // this line will only printed after the above line exectued bcz it will pushed into stack and reamain in stack until it will executed and return a value and then out from stack and then this main fn will execute           
    cout << "The area of circle is : " << areaofcircle;
    return 0;
}