#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(const vector<int> &arr1, const vector<int> &arr2) {
    int i = 0, j = 0;
    vector<int> ans;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {
    vector<int> arr1 = {2, 4, 6, 8, 10};
    vector<int> arr2 = {1, 3, 7};
    
    vector<int> result = intersection(arr1, arr2);
    
    cout << "Intersection: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
