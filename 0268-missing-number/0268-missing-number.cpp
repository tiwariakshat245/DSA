class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // 1. Array ko sort kar diya
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] != i) { // 2. Check kiya ki index aur value match kar rahi hai ya nahi
                return i;
            }
        }
        return n; // Agar 0 se n-1 tak sab theek hain, toh n missing hai
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int expectedSum = n * (n + 1) / 2;
//         int actualSum = 0;
//         for(int x : nums) {
//             actualSum += x;
//         }
//         return expectedSum - actualSum;
//     }
// };