#include<bits/stdc++.h>
using namespace std;
void backtrack(vector<string> ans,string curr,int open,int close,int maxm)
{
    if(close==maxm)
    {
        cout<<curr<<endl;
        return;
    }
    if(open<maxm)
        backtrack(ans,curr+"(",open+1,close,maxm);
    if(close<open)
        backtrack(ans,curr+")",open,close+1,maxm);
}
vector<string> generateparanthesis(int n){
    vector<string> ans;
    backtrack(ans,"",0,0,n);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<string> v(2*n);
    v=generateparanthesis(n);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
}
