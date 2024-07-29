class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0;
        vector<int> chars(256, -1);
        int len = 0;
        while (r < n){
            if (chars[s[r]] != -1) l = max(chars[s[r]] + 1, l);
            chars[s[r]] = r;
            len = max(len, r - l + 1);
            r++;
        }

        return len;
    }
};

// C++
// 0 ms (beats 100.00%)
// 10.26 mb (beats 83.87%)