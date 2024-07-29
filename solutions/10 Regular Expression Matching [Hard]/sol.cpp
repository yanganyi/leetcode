class Solution {
public:
    bool isMatch(string s, string p) {
        int a = s.size(), b = p.size();
        vector<bool> curr(b + 1, false);

        for (int i=0; i<=a; i++){
            bool prev = curr[0];
            curr[0] = !i;

            for (int j=1; j<=b; j++){
                bool t = curr[j];
                if (p[j - 1] == '*'){
                    curr[j] = curr[j - 2] || (i && curr[j] && (p[j - 2] == '.' || p[j - 2] == s[i - 1]));
                }
                else{
                    curr[j] = i && prev && (p[j - 1] == '.' || p[j - 1] == s[i - 1]);
                }
                prev = t;
            }
        }

        return curr[b];
    }
};

// C++
// 0 ms (beats 100.00%)
// 8.24 mb (beats 68.86%)