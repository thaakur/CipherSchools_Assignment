class Solution {
public:
    void nextGreaterElement(const vector<int> &elements)
    {
        stack<int> S;
        for(int element: elements){

            if(S.empty()){
                S.push(element);
                continue;
            }

            while(!S.empty() && S.top()<element){
                cout<<S.top()<<"->"<<element<<"\n";
                S.pop();
            }
            S.push(element);
        }

        while(!S.empty()){
            {
                cout<<S.top()<<"->-1\n";
                S.pop();
            }
        }
    }
};
