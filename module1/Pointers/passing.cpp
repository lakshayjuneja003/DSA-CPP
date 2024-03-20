#include <iostream>
using namespace std;
void callbyvalue(int x , int y){
    int temp = x;
    x = y;
    y = temp;
    cout << "Call by value x :  " << x << " y :  "<< y << endl;
}

void callbyref(int &x , int &y){
    int temp = x;
    x = y;
    y = temp;
    
}

void callbypointer(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    
}

int main()
{
    int a , b;
    cout << "Enter a : ";
    cin>> a;
    cout << "Enter b: ";
    cin >> b;
    cout<< "Before calling call by value" << a << " " << b<< endl;
    callbyvalue(a , b);
    cout<< "after calling call by value" << a << " " <<endl;
    
    cout<< "Before calling callby refrence" << a << " " << b << endl;
    callbyref(a , b);
    cout<< "after calling call by ref" << a << " "<< b<< endl;
     cout<< "Before calling callby pointers" << a << " " << b << endl;
     callbypointer(&a ,&b);
     cout<< "after calling call by pointers" << a << " "<< b<< endl;

    return 0;
}