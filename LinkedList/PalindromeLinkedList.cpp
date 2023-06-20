// https://leetcode.com/problems/palindrome-linked-list/description/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
        vector<int> arr1;
        vector<int> arr2;
        ListNode* curr = head;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        while(slow){
            arr1.push_back(curr->val);
            arr2.push_back(slow->val);
            slow = slow->next;
            curr = curr->next;
        }

        reverse(arr2.begin(), arr2.end());
        if(arr1.size() != arr2.size()){
            arr2.pop_back();
        }
        return arr1 == arr2;
    }
};
