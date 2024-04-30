#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// rotating the given matrix by 90 deg
void reverseImage(vector<vector<int>> &mat) {
    // transpose
    // complexity - (0(n/2 * n/2))
    int n = mat.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    // reversing the rows
     // complexity - (0(n * n/2))
    for (int i = 0; i < n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    reverseImage(mat);

    // Displaying the result
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
