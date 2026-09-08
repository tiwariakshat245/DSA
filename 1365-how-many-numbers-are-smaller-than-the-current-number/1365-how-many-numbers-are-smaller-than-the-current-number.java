class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] count = new int[101];
        
        // Step 1: Count frequency of each number
        for (int num : nums) {
            count[num]++;
        }
        
        // Step 2: Compute prefix sums (running total of smaller numbers)
        int sum = 0;
        for (int i = 0; i <= 100; i++) {
            int currentFreq = count[i];
            count[i] = sum;
            sum += currentFreq;
        }
        
        // Step 3: Build the result array
        int[] result = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            result[i] = count[nums[i]];
        }
        
        return result;
    }
}