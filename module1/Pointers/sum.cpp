#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int product = (*ptr1) + (*ptr2);

    cout << "Sum of " << *ptr1 << " and " << *ptr2 << " is: " << product << endl;

    return 0;
}
