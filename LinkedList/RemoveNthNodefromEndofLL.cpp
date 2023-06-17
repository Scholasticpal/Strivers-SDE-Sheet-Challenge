// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL){
            return head;
        }
----------------------------------
        ListNode* curr = head;
        int count = 0;
        while(curr){
            curr = curr->next;
            count++;
        }
----------------------------------
        if(count == n){
            head = head->next;
            return head;
        }
----------------------------------
        ListNode* temp = head;
         while(count != 0){
            temp = temp->next;
            count--;
        }
        ListNode* todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
//         n = count-n-1;
//         count = 0;
//         while(temp){
//             if(count == n){
//                 temp->next = temp->next->next;
//             }
//             temp = temp->next;
//             count++;
//         }
        return head;
    }
};
