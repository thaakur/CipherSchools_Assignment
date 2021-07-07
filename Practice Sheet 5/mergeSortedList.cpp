class Solution {
public:
    Node *sortedMerge(Node *a, Node *b){
        Node *res = NULL;
        if(a == NULL)
            return b;
        
        if(b == NULL)
            return b;

        if(a->data <= b->data){
            res = a;
            res->next = sortedMerge(a->next,b);
        }
        else{
            res = b;
            res->next = sortedMerge(a,b->next);
        }
        return res;
    }
};
