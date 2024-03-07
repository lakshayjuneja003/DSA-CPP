#include <iostream>
using namespace std;
int main() {
    float sub1, sub2, sub3, sub4, sub5;

    cout << "Enter marks in sub1, sub2, sub3, sub4, sub5: " << endl;
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    float total = sub1 + sub2 + sub3 + sub4 + sub5;
    
    // Convert one of the operands to float to ensure floating-point division
    float percentage = ((total)/ 500) * 100;

    cout << "Your percentage is: " << percentage << "%" << endl;

    return 0;
}
