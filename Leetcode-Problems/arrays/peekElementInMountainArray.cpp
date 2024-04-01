#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int start=0;
        int end = arr.size() -1;
        int mid;
         while (start <= end) {
            mid = start + (end - start) / 2;

            if (mid == 0 || mid == arr.size() - 1) {
                return mid;
            }

            if (arr[mid] < arr[mid + 1]) {
                start = mid;
            }
            else if (arr[mid - 1] > arr[mid]) {
                end = mid;
            }
            else {
                return mid;
            }
        }
        return start;
    }
};