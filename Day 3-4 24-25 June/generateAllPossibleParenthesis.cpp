
class Solution {
public:
    void generateParenthesisHelper(int open, int close, string &resultSoFar, vector<string> &result){
        if(open < 0 || close < 0 ){
            return;
        }
        if(open>close)
        {
            return;
        }
        else{
            if(open==0 && close ==0)
            {
                result.push_back(resultSoFar);
                return;
            }

            resultSoFar.push_back('(');
            generateParenthesisHelper(open-1, close, resultSoFar, result);
            resultSoFar.pop_back();
            resultSoFar.push_back(')');
            generateParenthesisHelper(open,close-1, resultSoFar,result);
            resultSoFar.pop_back();

        }
    }
    vector<string> generateParentheses(int N)
    {
        vector<string> result;
        string resultSoFar = "";
        generateParenthesisHelper(N,N,resultSoFar,result);
        return result;
    }
};
