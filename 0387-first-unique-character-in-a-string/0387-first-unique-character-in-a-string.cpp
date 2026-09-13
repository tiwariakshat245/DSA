class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        for(int i = 0; i < n; i++){
            bool isUnique = true;
            for(int j = 0; j < n; j++){
                if(i != j && s[i] == s[j]){
                    isUnique = false;
                    break;
                }
            }
            if(isUnique) return i; // Agar character repeat nahi hua toh iska index return kar do
        }
        return -1;
    }
};