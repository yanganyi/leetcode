#include <unordered_map>
 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
       
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])==mp.end()) mp[nums[i]]=i;
            else return {mp[target-nums[i]],i};
        }
 
        return {-1,-1};
    }
};

// C++
// 11 ms (beats 63.38%)
// 10.82 mb (beats 99.98%)