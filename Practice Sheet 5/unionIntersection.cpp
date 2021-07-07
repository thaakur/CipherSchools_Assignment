class Solution {
public:
    Node *getUnion( Node *a , Node *b){
        Node *result = NULL;
        Node *head_a =a, *head_b =b;

        while(head_a!= NULL){
            push(&result, head_a->data);
            head_a = head_a->next;
        }

        while(head_b!=NULL){
            if(!isPresent(result, head_b->data))
                push(&result, head_b->data);
                head_b = head_b->next;
        
        }
        return result;
    }

    Node *getIntersection( Node *a , Node *b){
        Node * res =NULL;
        Node* head_a = a;
        while(head_a!=NULL){
            if(isPresent(b,head_a->data)){
                push(&res,head_a->data);
            }
            head_a = head_a->next;
        }
        return res;
    }
};
