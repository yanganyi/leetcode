class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2, vector<int>(n-2));
        for (int i=0; i<n-2; i++){
            for (int j=0; j<n-2; j++){
                int loc = 0;
                for (int k=i; k<=i+2; k++){
                    for (int l=j; l<=j+2; l++) loc = max(loc,grid[k][l]);
                }

                ans[i][j]=loc;
            }
        }

        return ans;
    }
};

// C++
// 15 ms (beats 14.43%)
// 13.37 mb (beats 96.59%)