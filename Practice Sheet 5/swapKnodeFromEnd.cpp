class Solution {
public:
    void swapKFromEnd(Node **head, int k){
        int n = getSize(*head);
        if(n < k)
            return;
        
        if(2*k -1 == n)
            return;
        
        Node *ptr = *head;
        Node *qtr = NULL;
        for(int i=1;i<k;i++)
        {
            qtr = ptr;
            ptr = ptr->next;
        }

        Node *p = *head;
        Node *q = NULL;
        for(int i=1;i< n-k +1;i++)
        {
            q=p;
            p=p->next;
        }

        if(qtr!=NULL){
            qtr->next= p;
        }

        if(q!=NULL){
            q->next = ptr;
        }

        Node *temp = ptr->next;
        ptr->next = p->next;
        p->next = temp;

        if(k==1)
            *head = p;
        if(k==n)
            *head = ptr;
    }
};
