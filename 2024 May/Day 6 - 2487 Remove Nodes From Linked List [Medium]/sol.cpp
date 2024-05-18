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
    ListNode* removeNodes(ListNode* head) {
        if (head==nullptr || head->next==nullptr) return head;

        ListNode* p = nullptr;
        ListNode* c = head;
        while (c!=nullptr){
            ListNode* next = c->next;
            c->next = p;
            p = c;
            c = next;
        }

        c = p->next;
        p->next = nullptr;

        while (c!=nullptr){
            ListNode* t = c->next;
            if (c->val >= p->val){
                c->next = p;
                p = c;
            }

            c = t;
        }

        return p;
    }
};

// C++
// 241 ms (beats 94.26%)
// 159.62 mb (beats 96.96%)