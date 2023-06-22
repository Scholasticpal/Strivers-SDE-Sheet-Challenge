// https://leetcode.com/problems/rotate-list/description/

class Solution {
public:
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next){return head;}
        
        int len = 1;
        ListNode* last = head;
        while(last->next){
            len++;
            last = last->next;
        }
        last->next = head;
        k = k%len;
        int m = len-k;

        ListNode* curr = head;
        while(m>1){
            curr = curr->next;
            m--;
        }
        head = curr->next;
        curr->next = NULL;
        return head;
    }
};
