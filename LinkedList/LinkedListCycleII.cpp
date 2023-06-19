// https://leetcode.com/problems/linked-list-cycle-ii/description/
// Floyd's Cycle-Finding Algorithm / Hare-Tortoise Algorithm

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next; //IMPORTANT STEP - NOW FAST POINTER PLAYS A DIFFERENT ROLE HERE
                }
                return slow;
            }
        }
        return NULL;
    }
};
