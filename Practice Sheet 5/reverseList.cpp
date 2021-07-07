class Solution {
public:
  void reverseList()
	{
		Node* curr = head;
		Node *prev = NULL, *next = NULL;

		while (curr != NULL) 
    {	
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
    }
		head = prev;
	}
};
