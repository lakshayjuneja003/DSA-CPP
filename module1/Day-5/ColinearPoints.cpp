#include <iostream>
using namespace std;

bool arePointsCollinear(float x1, float y1, float x2, float y2, float x3, float y3) {
    // Calculate slopes between pairs of points
    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y2) / (x3 - x2);

    // Check if slopes are equal (approximately, considering float comparison)
    return (slope1 == slope2);
}

int main() {
    float x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third point (x3, y3): ";
    cin >> x3 >> y3;

    // Check if the points are collinear
    if (arePointsCollinear(x1, y1, x2, y2, x3, y3)) {
        cout << "The three points are collinear and lie on a straight line." << endl;
    } else {
        cout << "The three points are not collinear." << endl;
    }

    return 0;
}
