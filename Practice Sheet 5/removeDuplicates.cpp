class Solution {
public:
    void removeDuplicates(Node* head){
        if(head == NULL || head->next == NULL){
            return;
        }
        
        Node *ptr = head, *qtr = head->next;
        while(ptr!= NULL && qtr!= NULL){
            if(ptr->data == qtr->data)
            {
                ptr->next = qtr->next;
                delete qtr;
                qtr = ptr->next;
            }
            else{
                ptr =ptr->next;
                qtr = qtr->next;
            }

        }
    }
};
