class Solution {
public:
    Node *KAltReverse(Node* head, int K)
    {
        if(head==NULL|| head->next == NULL){
            return head;
        }
        int k = 0;
        Node *prev = NULL, *curr = head, *nxt = NULL;
        while(curr!=NULL && k < K){
            k++;
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        if(head!=NULL){
            head->next = curr;
        }
        k=0;
        while(k<K-1 && curr!=NULL)
        {
            curr = curr->next;
            k++;
        }
        if(curr!=NULL)
        {
            curr->next = KAltReverse(curr->next ,K);
        }
        return prev;
    }

};
