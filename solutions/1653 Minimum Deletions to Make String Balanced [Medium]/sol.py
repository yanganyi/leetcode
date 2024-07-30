class Solution:
    def minimumDeletions(self, s):
        ans,ct=0,0
        for i in s:
            if i=='b':
                ct+=1
            elif ct:
                ans+=1
                ct-=1
        return ans
    
# Python    
# 150 ms (beats 98.00%)
# 17.54 mb (beats 92.33%)