class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow cases
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // 2^31 - 1
        }
        if (dividend == INT_MIN && divisor == 1) {
            return INT_MIN;
        }

        // Determine the sign of the result
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert both to long long and take absolute values to avoid overflow with INT_MIN
        long long n = labs(dividend);
        long long d = labs(divisor);
        long long ans = 0;

        while (n >= d) {
            long long temp = d, multiple = 1;
            // Double the divisor using bitwise shift until it exceeds the remaining dividend
            while (n >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            n -= temp;
            ans += multiple;
        }

        return negative ? -ans : ans;
    }
};