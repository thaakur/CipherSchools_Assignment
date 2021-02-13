#include<bits/stdc++.h>
using namespace std;
int majnaive(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                cnt++;
        }
        if(cnt>n/2)
            return i;
    }
    return -1;
}
int majeff(int a[],int n)       //moore's algo to find candidate
{
    int res=0,cnt=1;
    for(int i=1;i<n;i++)
    {
        if(a[res]==a[i])
            cnt++;
        else
            cnt--;
        if(cnt==0)
        {
            res=i;
            cnt=1;
        }
    }
    cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[res]==a[i])
            cnt++;
    }
    if(cnt<=n/2)
        return -1;
    return res;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<majeff(a,n);    //returns  any index of maj
}
