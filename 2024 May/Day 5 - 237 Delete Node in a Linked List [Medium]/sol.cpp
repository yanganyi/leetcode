/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node){
        *node=*node->next;
    }
};

// C++
// 0 ms (beats 100.00%)
// 11.32 mb (beats 42.93%)