class Solution:
    def isValid(self, s: str) -> bool:
        d={"(":")","[":"]","{":"}"}
        stk=[]
        for i in s:
            if i in "([{": stk.append(i)
            else:
                if not stk:
                    return False
                a=stk[-1]
                if (d[a]!=i):
                    return False
                stk.pop()
        
        return not stk
    
# Python    
# 41 ms (beats 20.25%)
# 16.60 mb (beats 42.16%)