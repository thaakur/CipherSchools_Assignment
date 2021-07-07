class Solution {
public:
    bool isPalindrome(Node **left, Node *right){
        if(right==NULL){
            return true;
        }

        bool isPalin = isPalindrome(left, right->next);
        if(!isPalin){
            return false;
        }
        bool isDataEqual = ((*left)->data== right->data);
        (*left) = (*left)->next;
        return isDataEqual;
    }

    bool isPalindrome(Node * head){
        return isPalindrome(&head,head);
    }
};
