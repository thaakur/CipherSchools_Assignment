class Solution {
public:
    void sortList(Node *head){
        Node *curr = head, *index = NULL;
        int temp;

        if(head == NULL)
            return;
        while(curr != NULL){
            index = curr->next;
            while(index != NULL){
                if(curr->data > index->data){
                    temp = curr ->data;
                    curr->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            curr = curr->next;        
        }
    }

};
