class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n1=len(nums1); n2=len(nums2)
        if n1>n2:
            return self.findMedianSortedArrays(nums2,nums1)
        n=n1+n2
        left=(n+1)//2
        low=0
        high=n1
        while low<=high:
            mid1 = (low+high) // 2
            mid2 = left-mid1
            l1,l2,r1,r2 = float("-inf"),float("-inf"),float("inf"),float("inf")
            if mid1<n1: r1=nums1[mid1]
            if mid2<n2: r2=nums2[mid2]
            if mid1>=1: l1=nums1[mid1-1]
            if mid2>=1: l2=nums2[mid2-1]
            if l1<=r2 and l2<=r1:
                if n%2==0: return (float(max(l1,l2)) + float(min(r1,r2))) / 2.0
                else: return max(l1,l2)
            if l1>r2: high=mid1-1
            else: low=mid1+1
        
        return 0
    
# Python    
# 78 ms (beats 71.85%)
# 17.04 mb (beats 6.51%)