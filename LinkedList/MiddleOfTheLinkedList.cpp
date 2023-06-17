// https://leetcode.com/problems/middle-of-the-linked-list/description/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        int count = 0;
        while(curr!= NULL){
            count++;
            curr = curr->next;
        }
        count = count/2;
        ListNode* temp = head;
        while(count!= 0){
            temp = temp->next;
            count--;
        }
        return temp;
    }
};
