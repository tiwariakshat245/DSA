class Solution {
public:
    bool isNumber(string s) {
        bool seenDigit = false;
        bool seenExponent = false;
        bool seenDot = false;
        
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char c = s[i];
            
            // 1. Check for Digits (0-9)
            if (c >= '0' && c <= '9') {
                seenDigit = true;
            }
            // 2. Check for Signs (+ or -)
            else if (c == '+' || c == '-') {
                // Signs can only be at the very start (index 0) or immediately following 'e'/'E'
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') {
                    return false;
                }
            }
            // 3. Check for Decimal Dot (.)
            else if (c == '.') {
                // Dots cannot appear if we already saw a dot or an exponent
                if (seenDot || seenExponent) {
                    return false;
                }
                seenDot = true;
            }
            // 4. Check for Exponent (e or E)
            else if (c == 'e' || c == 'E') {
                // Exponents cannot appear if we already saw one, or if no digit appeared before it
                if (seenExponent || !seenDigit) {
                    return false;
                }
                seenExponent = true;
                seenDigit = false; // Reset because an integer MUST follow the exponent
            }
            // 5. Any other invalid character
            else {
                return false;
            }
        }
        
        // Must have seen at least one valid digit by the end
        return seenDigit;
    }
};