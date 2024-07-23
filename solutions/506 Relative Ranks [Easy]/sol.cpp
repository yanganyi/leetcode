class Solution {
private:
    int findmax(vector<int>& score) {
        int ans = 0;
        for (int s: score) {
            if (s > ans) ans = s;
        }
        return ans;
    }
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        int m = findmax(score);
        vector<int> scoreind(m+1, 0);
        for (int i=0; i<n; i++) scoreind[score[i]] = i+1;

        const vector<string> medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        vector<string> rank(n);
        int place = 1;
        for (int i=m; i>=0; i--){
            if (scoreind[i] != 0){
                int t = scoreind[i] - 1;
                if (place < 4) rank[t] = medals[place-1];
                else rank[t] = to_string(place);
                place++;
            }
        }
        return rank;
    }
};

// C++
// 0 ms (beats 100.00%)
// 14.52 mb (beats 44.12%)