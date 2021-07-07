class Solution {
public:
    Node *reverseInGroup(Node* head, int K)
    {
        if(head==NULL|| head->next == NULL){
            return head;
        }
        int k=0;
        Node *prev = NULL, *curr = head, *nxt = NULL;
        while(curr!=NULL && k < K){
            k++;
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        if(nxt!=NULL)
        {
            head->next = reverseInGroup(nxt ,K);
        }
        return prev;
    }
};
