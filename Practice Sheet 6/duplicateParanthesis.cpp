class Solution {
public:
    bool checkForDuplicateParenthesis( string exp){
        stack<char> optr;

        for(int i=0; i<exp.length();i++)
        {
            if(exp[i]==')'){
                char top = optr.top();
                optr.pop();
                int cnt = 0;
                while(top!='('){
                    cnt++;
                    top = optr.top();
                    optr.pop();
                }
                if(cnt<1){
                    return true;
                }
            }
            else{
                optr.push(exp[i]);
            }
        }
        return false;
    }
};
