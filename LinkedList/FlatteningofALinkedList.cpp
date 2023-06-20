// https://bit.ly/3nqtEA1

Node* MergeTwoLists(Node* a, Node* b){
	Node* temp = new Node(0);
	Node* res = temp;
	while(a && b){
		if(a->data < b->data){
			temp->child = a;
			temp = temp->child;
			a = a->child;
		}
		else{
			temp->child = b;
			temp = temp->child;
			b = b->child;
		}
	}

	if(a) temp->child = a;
	else temp->child = b;
	return res->child;
}
Node* flattenLinkedList(Node* head) 
{
	if(head == NULL || head->next == NULL){
		return head;
	}
	Node* ptr = flattenLinkedList(head->next);
	head->next = NULL;
	Node* nhead = MergeTwoLists(head, ptr);
	return nhead;
}
