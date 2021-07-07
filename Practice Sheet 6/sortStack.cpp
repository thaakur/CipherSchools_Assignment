class Solution {
public:
    void sortedPush(Stack **s, int val)
    {
        if(isEmpty(*s) || val< top(*s)){
            push(s,val);
            return;
        }
        
        int temp = top(*s);
        pop(s);

        sortedPush(s,val);
        push(s,temp);

    }

    void sortedStack(Stack **s){
        if(!isEmpty(*s)){
            int x = top(*s);
            pop(s);
            sortedStack(s);
            sortedPush(s,x);
        }
    }
};
