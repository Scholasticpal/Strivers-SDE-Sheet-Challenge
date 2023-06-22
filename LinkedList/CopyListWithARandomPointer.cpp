// https://leetcode.com/problems/copy-list-with-random-pointer/description/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       unordered_map<Node*, Node*> mp;
       Node* temp = head;

       while(temp!= NULL){
           Node* newNode = new Node(temp->val);
           mp[temp] = newNode;
           temp = temp->next;
       }
       Node* t = head;

       while(t!= NULL){
           Node* node = mp[t];
           node->next = (t->next != NULL) ? mp[t->next] : NULL;
           node->random = (t->random != NULL) ? mp[t->random] : NULL;
           t = t->next;
       }
       return mp[head];
    }
};
