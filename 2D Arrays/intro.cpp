#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize a vector of vectors
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Print the vector of vectors
    for (const auto &row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
