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
void generateparanthesis(int n){
    vector<string> ans;
    backtrack(ans,"",0,0,n);
}
int main()
{
    int n;
    cin>>n;
    generateparanthesis(n);
}
