class Solution {
public:
    int strStr(string haystack, string needle) {
        const int m = haystack.length();
        const int n = needle.length();

        for (int i=0; i < m-n+1; i++) if (haystack.substr(i, n) == needle) return i;

        return -1;
    }
};

// C++
// 0 ms (beats 100.00%)
// 7.98 mb (beats 22.87%)