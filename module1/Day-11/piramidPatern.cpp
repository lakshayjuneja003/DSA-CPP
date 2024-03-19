#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Printing the upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Print increasing stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Printing the lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print decreasing stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
