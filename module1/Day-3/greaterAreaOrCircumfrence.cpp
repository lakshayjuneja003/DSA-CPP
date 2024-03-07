#include <iostream>
using namespace std;
int main(){
    float pi = 3.14;
    float radius;
    cout << "enter radius of circle";
    cin>> radius;
    float area = pi * radius * radius;
    float circumfrence = 2 * pi * radius;

    if(area > circumfrence){
        cout << "Area of circle is greater : " << area << endl;
    }
    else{
        cout << "circumfrence of circle is greater: " << circumfrence << endl;
    }
    
    return 0;
}