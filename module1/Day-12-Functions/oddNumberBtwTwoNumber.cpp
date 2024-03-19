#include <iostream>
using namespace std;

void oddNumber(int a, int b) {
    for (int i = a + 1; i < b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int a, b;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    oddNumber(a, b);
    
    return 0;
}
