class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if k == 1: return head

        def reverse(fi, la, prev):
            nonlocal head
            if prev:
                prev.next = la
            else:
                head = la
            
            prev, curr = fi, fi.next
            fi.next = la.next

            for _ in range(k - 1):
                curr.next, prev, curr = prev, curr, curr.next
        
        ct = 1
        curr = fi = head
        prev = None

        while curr:
            if ct == k:
                reverse(fi, curr, prev)
                prev = fi
                curr, fi = fi.next, fi.next
                ct = 1
            else:
                curr = curr.next
                ct += 1
        
        return head
    
# Python    
# 46 ms (beats 35.12%)
# 17.49 mb (beats 49.73%)