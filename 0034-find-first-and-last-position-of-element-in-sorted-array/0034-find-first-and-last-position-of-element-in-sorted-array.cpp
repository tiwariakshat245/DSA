class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Find the first position of target
        auto start = lower_bound(nums.begin(), nums.end(), target);
        
        // If the element is not found
        if (start == nums.end() || *start != target) {
            return {-1, -1};
        }
        
        // Find the last position of target
        auto end = upper_bound(nums.begin(), nums.end(), target);
        
        // lower_bound and upper_bound operate in O(log n) time
        return {static_cast<int>(start - nums.begin()), static_cast<int>(end - nums.begin() - 1)};
    }
};