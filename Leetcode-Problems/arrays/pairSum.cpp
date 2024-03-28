#include <iostream>
#include <vector>
#include <algorithm> // Required for sort
using namespace std;

vector<vector<int>> pairsum(vector<int>& arr, int s) {
    vector<vector<int>> res;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                res.push_back(temp);
            }
        }
    }
    // Sort the result vector of vectors based on the first element of each inner vector
    sort(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 10;
    
    vector<vector<int>> result = pairsum(arr, sum);
    
    cout << "Pairs with sum " << sum << " are:\n";
    for(const auto& pair : result) {
        cout << "(" << pair[0] << ", " << pair[1] << ")\n";
    }
    
    return 0;
}
