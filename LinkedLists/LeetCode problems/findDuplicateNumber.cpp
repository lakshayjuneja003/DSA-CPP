#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Using Floyd's Tortoise and Hare (Cycle Detection)
        int tortoise = nums[0];
        int hare = nums[0];

        // Phase 1: Finding the intersection point
        do {
            tortoise = nums[tortoise]; // Moves one step
            hare = nums[nums[hare]];   // Moves two steps
        } while (tortoise != hare);    // Loop until they meet

        // Phase 2: Finding the entrance to the cycle
        tortoise = nums[0];            // Reset tortoise to start
        while (tortoise != hare) {     // Loop until they meet again
            tortoise = nums[tortoise]; // Moves one step
            hare = nums[hare];         // Moves one step
        }

        return hare;                   // Both pointers now point to the duplicate number
    }
};

int main(){
    Solution s;
    vector<int> a = {1, 3, 4, 2, 2};
    int num = s.findDuplicate(a);
    cout << num;
}
