class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        a=-1
        nums=set(nums)
        for i in nums:
            if i>a and -i in nums:
                a=i
        return a
    
# Python    
# 99 ms (beats 90.18%)
# 16.66 mb (beats 97.71%)