class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1=version1.split(".")
        v2=version2.split(".")
        l1=len(v1)-1
        l2=len(v2)-1

        while v1!=[] and int(v1[l1])==0:
            v1.pop()
            l1-=1
        while v2!=[] and int(v2[l2])==0:
            v2.pop()
            l2-=1
        
        for i in range(min(len(v1),len(v2))):
            if int(v1[i])>int(v2[i]):
                return 1
            elif int(v1[i])<int(v2[i]):
                return -1
        
        if len(v1)>len(v2):
            return 1
        elif len(v1)<len(v2):
            return -1
        
        return 0
    
# Python    
# 28 ms (beats 91.52%)
# 16.59 mb (beats 47.04%)