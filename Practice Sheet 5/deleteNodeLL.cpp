class Solution {
public:
    void deleteFromList(Node ** head, int val){
        Node *temp;
        if((*head)->data == val){
            temp =*head;
            *head = (*head)->next;
            free(temp);
        }
        else{
            Node *curr = *head;
            while(curr->next != NULL)
            {
                if(curr->next->data == val)
                {
                    temp = curr->next;
                    curr->next = curr->next->next;
                    free(temp);
                }
                else{
                    curr = curr->next;
                }
            }
        }
    }
};
