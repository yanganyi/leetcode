class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1=version1.split(".")
        v2=version2.split(".")
        l1=len(v1)-1
        l2=len(v2)-1

        v1=[int(i) for i in v1]
        v2=[int(i) for i in v2]

        while v1!=[] and v1[l1]==0:
            v1.pop()
            l1-=1
        while v2!=[] and v2[l2]==0:
            v2.pop()
            l2-=1

        if l1<l2:
            for i in range(l2-l1):
                v1.append(0)
        elif l1>l2:
            for i in range(l1-l2):
                v2.append(0)

        a1="".join([str(i) for i in v1])
        a2="".join([str(i) for i in v2])

        a1=int(a1)
        a2=int(a2)

        if a1>a2:
            return 1
        elif a1<a2:
            return -1
        else:
            return 0
            
# Python    
# 41 ms (beats 14.72%)
# 16.42 mb (beats 90.42%)