#include<bits/stdc++.h>
using namespace std;
int stockbuysellnaive(int p[],int s,int e)
{
    if(e<=s)
        return 0;
    int profit=0;
    for(int i=s;i<e;i++)
    {
        for(int j=i+1;j<=e;j++)
        {
            if(p[j]>p[i])
            {
                int curr_profit=p[j]-p[i]+stockbuysellnaive(p,s,i-1)+stockbuysellnaive(p,j+1,e);
                profit=max(curr_profit,profit);
            }
        }
    }
    return profit;
}
int stockbuyselleff(int p[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(p[i]>p[i-1])
            profit+=(p[i]-p[i-1]);
    }
    return profit;
}
int main()
{
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    //cout<<stockbuysellnaive(p,0,n-1);     //returns max profit
    cout<<stockbuyselleff(p,n);
}
