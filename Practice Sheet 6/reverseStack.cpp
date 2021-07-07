class Solution {
public:
    void InsertAtBottom(stack<int> &S, int x){
        if(S.empty()){
            S.push(x);
            return;
        }
        else{
            int temp = S.top(); S.pop();
            InsertAtBottom(S,x);
            S.push(temp);
        }
    }

    void reverseStack(stack<int> &S)
    {
        if(S.empty()){
            return;
        }
        else{
            int temp = S.top();
            S.pop();
            reverseStack(S);
            InsertAtBottom(S,temp);
        }
    }
};
