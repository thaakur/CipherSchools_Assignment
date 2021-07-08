class Solution {
public:
    bool checkBalancedParenthesis(string exp){
        stack<char> bracket;
        char ch;
        for(int i=0; i< exp.length();i++){
            if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
            {
                bracket.push(exp[i]);
                continue;
            }

            if(bracket.empty()){
                return false;
            }

        switch(exp[i]){
            case ')':
                ch = bracket.top();
                bracket.pop();
                if(ch =='{' || ch == '[')
                {
                    return false;
                }
                break;
            case '}':
                ch = bracket.top();
                bracket.pop();
                if(ch =='(' || ch == '[')
                {
                    return false;
                }
                break;
            case ']':
                ch = bracket.top();
                bracket.pop();
                if(ch =='{' || ch == '(')
                {
                    return false;
                }
                break;
            default:
                return false;
        }

        }
        return (bracket.empty());
    }

};
