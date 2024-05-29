#include<iostream>
#include <vector>
using namespace std;
// fn to solve subsets recursively
void subsets(vector<int> nums , int index ,vector<int> output , vector<vector<int>> & ans){
    // base case
    if(index >= nums.size()){
        ans.push_back(output);
        return ;
    }

    // exclude call
    subsets(nums, index+1, output , ans);\
    // include call
    int element = nums[index];
    subsets(nums,index+1 , output, ans);

} 

int main(){
    vector<int> nums = { 1, 2 ,3};
    vector<vector<int>> ans;

    vector<int> output;
    int index = 0;
    subsets(nums , index , output ,ans );
    // output - [] [1] [2] [3] [1 ,2] [ 2 ,3] [1 ,3] [1 , 2, 3]
    return 0;
}