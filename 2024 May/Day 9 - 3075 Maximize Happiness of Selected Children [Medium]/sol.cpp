#pragma GCC optimize("O3", "unroll-loops")

const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        sort(begin(happiness),end(happiness),greater<int>());
        int i = 0;
        long long ans = 0;

        while (k--){
            happiness[i]=max(happiness[i]-i,0);
            ans+=happiness[i++];
        }

        return ans;
    }
};

// C++
// 112 ms (beats 88.78%)
// 107.23 mb (beats 33.71%)