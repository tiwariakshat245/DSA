class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        for (int i = 0; left < right; i++) {
            // Agar left wala character vowel nahi hai, toh aage badho
            if (s[left] != 'a' && s[left] != 'e' && s[left] != 'i' && s[left] != 'o' && s[left] != 'u' &&
                s[left] != 'A' && s[left] != 'E' && s[left] != 'I' && s[left] != 'O' && s[left] != 'U') {
                left++;
            }
            // Agar right wala character vowel nahi hai, toh peeche aao
            else if (s[right] != 'a' && s[right] != 'e' && s[right] != 'i' && s[right] != 'o' && s[right] != 'u' &&
                     s[right] != 'A' && s[right] != 'E' && s[right] != 'I' && s[right] != 'O' && s[right] != 'U') {
                right--;
            }
            // Jab dono taraf vowel mil jayein, toh unhe swap kardo
            else {
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }
        }
        
        return s;
    }
};