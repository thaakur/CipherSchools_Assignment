#include<bits/stdc++.h>
#define ll long long
using namespace std;
int getpeaknaive(int a[],int n)
{
    if(n==1)
        return a[0];
    if(a[0]>=a[1])
        return a[0];
    if(a[n-1]>=a[n-2])
        return a[n-1];
    for(int i=1;i<n-1;i++)
    {
        if(a[i]>=a[i-1] && a[i]>=a[i+1])
            return a[i];
    }
}
int findpeakeff(int a[],int n)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if((mid==0 || a[mid-1]<=a[mid])&& (mid==n-1 || a[mid+1]<=a[mid]))
            return mid;
        if(mid>0 && a[mid-1]>=a[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        //cout<<getpeaknaive(a,n);
        cout<<findpeakeff(a,n);
    }
}

