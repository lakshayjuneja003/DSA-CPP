 
 #include <iostream>
 #include <vector>
 using namespace std;
 class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Using Floyd's Tortoise and Hare (Cycle Detection)
        int tortoise = nums[0];
        int hare = nums[0];
        // cout << nums[hare] << endl;
        // cout << nums[tortoise] << endl;
        // Phase 1: Finding the intersection point
        do {
            tortoise = nums[tortoise];
            // cout << nums[tortoise] << endl;
            hare = nums[nums[hare]];
            // cout << nums[hare] << endl;
        } while (tortoise != hare);

        // Phase 2: Finding the entrance to the cycle
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};

int main(){
    Solution s;
    vector<int> a = {1,3,4,2,2};
    int num = s.findDuplicate(a);
    cout << num;
}
