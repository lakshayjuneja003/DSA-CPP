#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Even row
            for (int j = 1; j <= i; j++) {
                cout << char(64 + j) << " ";
            }
        } else { // Odd row
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    printPattern(n);
    return 0;
}
