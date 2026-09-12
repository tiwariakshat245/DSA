class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            // Only add the element if it's the first element or different from the previous one
            if(i == 0 || nums[i] != nums[i - 1]){
                ans.push_back(nums[i]);
            }
        }
        int k = ans.size();
        for(int i = 0; i < k; i++){
            nums[i] = ans[i];
        }
        return k;
    }
};