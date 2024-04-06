#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int>& arr, int k, int mid) {
    int painterCount = 1;
    int arrayCount = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > mid)
            return false;
        if (arrayCount + arr[i] <= mid) {
            arrayCount += arr[i];
        } else {
            painterCount++;
            arrayCount = arr[i];
        }
    }
    return painterCount <= k; // Check if number of painters needed is less than or equal to available painters
}

int findMinPainters(vector<int>& arr, int k) {
    int s = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    while (s <= e) { // Corrected the termination condition
        int mid = s + (e - s) / 2;
        if (isPossible(arr, k, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {5, 5, 5, 5};
    int k = 2; // Number of painters
    int result = findMinPainters(arr, k);
    cout << "Minimum time taken: " << result << endl;
    return 0;
}
