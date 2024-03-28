#include <iostream>
#include <vector>
#include <algorithm> // Required for sort
using namespace std;

vector<vector<int>> pairsum(vector<int>& arr, int s) {
    vector<vector<int>> res;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            for(int k = j+1; k<arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == s) {
                    vector<int> temp;
                    temp.push_back(min(arr[i], min(arr[j], arr[k])));
                    temp.push_back(max(arr[i], max(arr[j], arr[k])));
                    temp.push_back(arr[k]);
                    res.push_back(temp);
                }
            }
        }
    }
    // Sort the result vector of vectors based on the first element of each inner vector
    sort(res.begin(), res.end());
    return res;
}
// using two pointers approach
// for better time ans space complexity


// vector<vector<int>> pairsum(vector<int>& arr, int s) {
//     vector<vector<int>> res;
//     sort(arr.begin(), arr.end()); // Sort the array
//     int n = arr.size();
//     for(int i = 0; i < n - 2; i++) {
//         int left = i + 1;
//         int right = n - 1;
//         while(left < right) {
//             int sum = arr[i] + arr[left] + arr[right];
//             if(sum == s) {
//                 res.push_back({arr[i], arr[left], arr[right]});
//                 left++;
//                 right--;
//             } else if(sum < s) {
//                 left++;
//             } else {
//                 right--;
//             }
//         }
//     }
//     return res;
// }

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 10;
    
    vector<vector<int>> result = pairsum(arr, sum);
    
    cout << "Triplets with sum " << sum << " are:\n";
    for(const auto& triplet : result) {
        cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ")\n";
    }
    
    return 0;
}
