class Solution {
public:
    int reverse(int x) {
        int count = 0;
        while (x != 0) {
            int temp = x % 10;
            
            // Check for overflow before it happens
            if (count > INT_MAX / 10 || (count == INT_MAX / 10 && temp > 7)) return 0;
            if (count < INT_MIN / 10 || (count == INT_MIN / 10 && temp < -8)) return 0;
            
            count = count * 10 + temp;
            x /= 10;
        }
        return count;
    }
};