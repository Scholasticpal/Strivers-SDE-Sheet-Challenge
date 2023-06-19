// https://leetcode.com/problems/delete-node-in-a-linked-list/description/

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val; // copy next node's value
        node->next = node->next->next; // delete next node
    }
};
