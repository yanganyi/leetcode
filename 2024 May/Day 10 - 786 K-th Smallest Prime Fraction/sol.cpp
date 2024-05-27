#pragma GCC optimize("O3", "unroll-loops")

class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        double l = 0, r = 1, m = 0;
        
        while (l <= r){
            m = (l + r) / 2;
            double max = 0;
            int ct = 1, total = 0, a = 0, b = 0; // a and b for the fraction a/b
            for (int i=0; i<n; i++){
                while (ct < n && arr[i] >= arr[ct] * m) ct++;
                
                total += n; total -= ct;

                if (ct < n && max < 1.0 * arr[i] / arr[ct]){
                    max = 1.0 * arr[i] / arr[ct];
                    a = i; b = ct;
                }
            }
            
            if (total == k){
                vector<int> ans;
                ans = {arr[a],arr[b]};
                return ans;
            }

            if (total > k) r = m;
            else l = m;
        }
        vector<int> ans;
        return ans; // just to avoid leetcode error
    }
};

// C++
// 0 ms (beats 100.00%)
// 10.51 mb (beats 94.33%)