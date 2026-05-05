class Solution {
public:

    string removeSpaces(string s) {
        string res = "";
        for(int i = 0; i < s.length(); i++) {
             if('A' <= s[i] && s[i] <= 'Z') {
                res += (s[i] - 'A') + 'a';
            } else if((('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9')) && s[i] != ' ') {
                res += s[i];
            }
        }
        return res;
    }

    bool isPalindrome(string s) {
        s = removeSpaces(s);
        int l = 0, r = s.length() - 1;
        while(l < r) {
            if(s[l] != s[r]) return false;
            else l++, r--;
        }
        return true; 
    }
};
