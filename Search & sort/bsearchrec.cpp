#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int a[],int l,int h,int key)
{
    if(l<=h)
    {
        int mid=l+(h-l)/2;
        if(a[mid]<key)
            return binarysearch(a,mid+1,h,key);
        else if(a[mid]>key)
            return binarysearch(a,l,mid-1,key);
        else
            return true;
    }
    return false;
}
int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int l=0,h=n-1;
    cout<<binarysearch(a,l,h,key);
}
