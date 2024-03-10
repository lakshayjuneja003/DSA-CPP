#include <iostream>
using namespace std;

int main(){

    int x , y , z ;

    cout << "enter the length of first side" << endl;
    cin>> x;
    cout << "enter the length of second side" << endl;
    cin>> y;
    cout << "enter the length of third side" << endl;
    cin>> z;


    if(x == y && y == z){
        cout << "Equilateral triangle" << endl;
    } else if( x == y || y == z ||  x==z ){
        cout << "isosceles triangle " << endl;
    } else {
        cout << "Saclene triangle" << endl;
    }

    return 0;
}