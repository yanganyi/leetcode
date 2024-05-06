#pragma GCC optimize("O3", "unroll-loops")

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0, r=nums.size()-1;
        while (l<r && nums[l]!=-nums[r]){
            if (-nums[l]<=nums[r]) r--;
            else l++;
        }

        return (l<r) ? nums[r] : -1;
    }
};

// C++
// 14 ms (beats 77.33%)
// 22.71 mb (beats 82.89%)

// note: using io optimisatioin can further speed up code at the expense of memory
// check optimisations.cpp
// 6 ms (beats 98.63%)
// 23.08 mb (beats 47.54%)