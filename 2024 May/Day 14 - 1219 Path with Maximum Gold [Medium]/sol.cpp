class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxGold = 0;

        function<void(int,int,int)> dfs = [&](int i, int j, int currGold){
            if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0) return;

            int gold = grid[i][j];
            currGold += gold;
            maxGold = max(maxGold, currGold);

            grid[i][j] = 0;

            dfs(i+1, j, currGold);
            dfs(i-1, j, currGold);
            dfs(i, j+1, currGold);
            dfs(i, j-1, currGold);

            grid[i][j] = gold;
        };

        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (grid[i][j] != 0){
                    dfs(i, j, 0);
                }
            }
        }
        
        return maxGold;
    }
};

// C++
// 390 ms (beats 5.60%)
// 10.13 mb (beats 19.94%)