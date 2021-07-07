class Solution {
public:
    Node* findIntersection(Node *larger, Node *smaller, int d){
        Node *ptr = larger, *qtr = smaller;
        for(int i=0; i<d && ptr!= NULL; i++){
            ptr = ptr->next;
        }
        while(ptr!=NULL && qtr!=NULL){
            if(ptr==qtr)
                return ptr;
            ptr = ptr->next;
            qtr = qtr->next;
        }
        return NULL;
    }
    Node* findIntersection(Node *a, Node *b){
        if(a==NULL || b == NULL){
            return NULL;
        }
        int cntA = getSize(a);
        int cntB = getSize(b);
        int d = cntA - cntB;
        if(d>=0){
            return findIntersection(a,b,d);
        }
        else
        {
            return findIntersection(b,a,d);
        }

    }
};
