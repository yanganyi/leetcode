class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        lcp=""
        strs=sorted(strs)
        fi=strs[0]; la=strs[-1]
        s=min(len(fi),len(la))
        for i in range(s):
            if fi[i]!=la[i]:
                return lcp
            lcp+=fi[i]

        return lcp
    
# Python    
# 35 ms (beats 75.83%)
# 16.65 mb (beats 24.40%)