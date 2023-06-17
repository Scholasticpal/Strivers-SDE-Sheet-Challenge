// https://leetcode.com/problems/merge-two-sorted-lists/description/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
      ---------------------------
        ListNode* temp3 = list2;
        if(list1->val < list2->val){
            temp3 = list1;
            list1 = list1->next;
        }
        else{
            list2 = list2->next;
        }
      
      ----------------------------
        ListNode* ptr = temp3;
        while(list1 && list2){
            if((list1 -> val) < (list2 -> val)){
                ptr->next = list1;
                list1 = list1->next;
            }
            else{
                ptr->next = list2;
                list2 = list2->next;
            }
            ptr = ptr->next;
        }
      
      -----------------------------
        if(list1){
            ptr->next = list1;
        }else{
            ptr->next = list2;
        }
      
      -----------------------------
    return temp3;
    }
};
