class Solution {
public:
    void removeDuplicates(Node* head){
        Node *ptr, *qtr, *duplicate;
        ptr = head;

        while(ptr !=NULL && ptr->next != NULL){
            qtr = ptr;
            while(qtr->next != NULL){
                if(ptr->data == qtr->next->data){
                    duplicate = qtr->next;
                    qtr->next = qtr->next->next;
                    delete(duplicate);
                }
                else{
                    qtr = qtr->next;
                }
            }
            ptr = ptr->next;
        }
    }
};
