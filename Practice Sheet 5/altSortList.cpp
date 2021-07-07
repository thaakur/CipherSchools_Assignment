class Solution {
public:
    Node* rearrange(Node *head){
        if(head==NULL || head->next ==NULL)
        return head;
        Node *odd=head, *even=head->next, *nxt = even;
        while(1){
            if(odd == NULL || even == NULL || even->next== NULL){
                odd -> next = nxt;
                break;
            }
            odd->next = even->next;
            odd = even->next;

            if(odd->next ==NULL){
                even -> next =NULL;
                odd->next = nxt;
                break;
            }
            
            even-> next = odd->next;
            even = odd->next;
        }
    return head;
    }
};
