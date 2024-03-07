#include <iostream>
using namespace std;

// Function to calculate absolute value
int absolute(int number) {
    if (number < 0) {
        return -number; // Return the negative of the number
    } else {
        return number; // Return the number itself if it's non-negative
    }
    return 0;
}


int main() {
    int num = -5;
    int abs_value = absolute(num);
    // Output the absolute value
    cout << (abs_value); // Output: 5
    return 0;
}
