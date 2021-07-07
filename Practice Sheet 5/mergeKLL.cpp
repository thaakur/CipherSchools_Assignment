class Solution {
public:
    Node *mergeKLL(Node * arr[], int k){
        for(int i=1; i<=k;i++)
        {
            while(1){
                Node *head_first = arr[0], *head_i = arr[i];
                if(head_i == NULL)
                    break;

                if( head_first->data >= head_i->data){
                    arr[i] = head_i->next;
                    head_i->next = head_first;
                    arr[0] = head_i;
                }
                else{
                    while(head_first ->next!= NULL){
                        if( head_first->next->data >= head_i->data){
                            arr[i] = head_i->next;
                            head_i->next = head_first->next;
                            head_first->next = head_i;
                            break;
                        }
                        head_first = head_first->next;

                        if(head_first->next == NULL)
                        {
                            arr[i] = head_i->next;
                            head_i->next = NULL;
                            head_first->next = head_i;
                            head_first->next->next = NULL;
                            break;
                        }
                    }
                }
            }
        }
        return arr[0];
    }
};
