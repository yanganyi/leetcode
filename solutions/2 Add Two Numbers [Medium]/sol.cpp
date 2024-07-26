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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* tail = head;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0){
            int d1 = (l1 != nullptr) ? l1 -> val : 0;
            int d2 = (l2 != nullptr) ? l2 -> val : 0;

            int sum = d1 + d2 + carry;
            int digit = sum % 10; carry = sum / 10;

            ListNode* newNode = new ListNode(digit);

            tail -> next = newNode;
            tail = tail -> next;

            l1 = (l1 != nullptr) ? l1 -> next : nullptr;
            l2 = (l2 != nullptr) ? l2 -> next : nullptr;
        }

        ListNode* ans = head -> next;
        delete head;
        return ans;
    }
};

// C++
// 22 ms (beats 54.98%)
// 75.99 mb (beats 90.47%)