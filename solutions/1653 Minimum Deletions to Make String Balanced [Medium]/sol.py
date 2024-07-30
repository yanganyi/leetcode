class Solution:
    def minimumDeletions(self, s: str) -> int:
        ct,ans=0,0
        for i in s[::-1]:
            if i=='a': ct+=1
            else: ans=min(ct,ans+1)
        return ans
    
# Python    
# 248 ms (beats 74.67%)
# 17.20 mb (beats 100.00%)