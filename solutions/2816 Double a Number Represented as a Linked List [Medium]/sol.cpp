/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        if (head->val > 4) head = new ListNode(0,head);
        
        ListNode* t = head;
        while (t != nullptr){
            t->val = (t->val * 2) % 10;
            if (t->next != nullptr && t->next->val > 4) t->val++;
            t = t->next;
        }

        return head;
    }
};

// C++
// 167 ms (beats 69.83%)
// 120.56 mb (beats 96.15%)