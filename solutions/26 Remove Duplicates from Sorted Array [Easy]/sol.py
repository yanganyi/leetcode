class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        s=set(nums)
        nums.clear()
        for i in s:
            nums.append(i)
        nums.sort()
        return len(nums)
    
# Python    
# 69 ms (beats 87.32%)
# 18.01 mb (beats 7.85%)