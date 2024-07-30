class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        if not lists or len(lists) == 0: return None

        while len(lists) > 1:
            t = []
            for i in range(0, len(lists), 2):
                a = lists[i]; b = lists[i+1] if i + 1 < len(lists) else None
                t.append(self.mergeTwoLists(a, b))
            lists = t

        return lists[0]
    
    def mergeTwoLists(self, a, b):
        node = ListNode(); ans = node

        while a and b:
            if a.val > b.val:
                node.next = b; b = b.next
            else:
                node.next = a; a = a.next
            
            node = node.next
        
        if a:
            node.next = a
        if b:
            node.next = b

        return ans.next
    
# Python    
# 77 ms (beats 63.88%)
# 19.28 mb (beats 86.03%)