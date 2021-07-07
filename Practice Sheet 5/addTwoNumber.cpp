class Solution {
public:
    Node* addTwoNumbers(Node* a, Node* b){
        if(a == NULL){
            return b;
        }
        else if( b == NULL){
            return a;
        }
        else{
            Node dummy;
            Node *ptr = &dummy;
            int sum =0, carry =0;
            while(a!=NULL ||b!=NULL){
                sum = (a==NULL ? 0: a->data)+(b== NULL ?0:b->data)+carry;
                carry = sum / 10;
                sum = sum % 10;

                ptr->next = new Node(sum);
                ptr=ptr->next;
                if(a!=NULL)
                    a = a->next;
                if(b!=NULL)
                    b = b->next;
            }
            if(carry > 0){
                ptr->next= new Node(carry);
                ptr=ptr->next;
            }
            return dummy.next;
        }
        
    }
};
