#include<bits/stdc++.h>
using namespace std;
int trapnaive(int a[],int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=a[i];
        for(int j=0;j<i;j++)
            lmax=max(a[j],lmax);
        int rmax=a[0];
        for(int j=i+1;j<n;j++)
            rmax=max(rmax,a[j]);
        res=res+min(lmax,rmax)-a[i];
    }
    return res;
}
//for efficient o(n) precompute lmax rmax using lmax[n] rmax[n]
int trapeff(int a[],int n)
{
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=a[0];
    for(int i=1;i<n;i++)
        lmax[i]=max(lmax[i-1],a[i]);
    rmax[0]=a[0];
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(rmax[i-1],a[i]);
    for(int i=1;i<n-1;i++)
        res+=min(rmax[i],lmax[i])-a[i];
    return res;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<trapeff(a,n);
}
