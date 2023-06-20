// https://leetcode.com/problems/reverse-nodes-in-k-group/description/

class Solution {
public:
    int length(ListNode* head){
        int len;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {

        if(!head || !head->next){return head;}
        int len = length(head);
        stack<int> st;
        
        ListNode* ans = head;
        ListNode* temp = head;

        int k1 = k;
        len = len/k;
        while(temp!= NULL){
            st.push(temp->val);
            k1--;
            temp = temp->next;
            if(k1 == 0){
                while(!st.empty()){
                    ans->val = st.top();
                    st.pop();
                    ans = ans->next;
                }
            len--;
            k1 = k;
            }
            if(len == 0){
                break;
            }
        }
        return head;
    }
};
