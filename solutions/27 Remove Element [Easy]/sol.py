class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        index=0
        for i in range(len(nums)):
            if nums[i]!=val:
                nums[index]=nums[i]
                index+=1
        
        return index
    
# Python    
# 29 ms (beats 94.40%)
# 16.56 mb (beats 22.24%)