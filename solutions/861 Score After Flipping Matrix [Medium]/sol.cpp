#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#pragma GCC optimize ("-ffloat-store")

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n = grid.size(), m = grid[0].size();
        int ans = (1<<(m-1)) * n;

        for(int j=1; j<m; j++){
            int val = 1 << (m-j-1);
            int cnt = 0;
            for(int i=0; i<n; i++) if(grid[i][j]==grid[i][0]) cnt++;
            ans += max(cnt, n-cnt) * val;
        }

        return ans;
    }
};

// C++
// 0 ms (beats 100.00%)
// 10.40 mb (beats 17.36%)