#include <iostream>
using namespace std;

int main() {
    float x, y;

    // Input coordinates
    cout << "Enter the coordinates (x, y): ";
    cin >> x >> y;

    // Check if the point is at the origin
    if (x == 0 && y == 0) {
        cout << "The point lies at the origin (0, 0)" << endl;
    }
    // Check if the point lies on the x-axis
    else if (y == 0) {
        cout << "The point lies on the x-axis" << endl;
    }
    // Check if the point lies on the y-axis
    else if (x == 0) {
        cout << "The point lies on the y-axis" << endl;
    }
    else {
        cout << "The point does not lie on the x-axis, y-axis, or at the origin" << endl;
    }

    return 0;
}
