class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        for(int i = 0; i <=30; i++){
            if(ans == n){
                return true;
            }
        if(ans < __INT_MAX__/2){
            ans = ans * 2;
        }
        }
        return false;
    }
};