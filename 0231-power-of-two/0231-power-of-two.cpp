class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        long long p = 1;
        while(p < n) {
            p *= 2;
        }
        return p == n;
    }
};