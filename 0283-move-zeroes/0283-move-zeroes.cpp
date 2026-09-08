class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        
        // 1. Collect all non-zero elements
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                ans.push_back(nums[i]);
            }
        }

        // 2. Copy non-zero elements back to nums
        for(int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }

        // 3. Fill the rest of nums with zeroes
        for(int i = ans.size(); i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};