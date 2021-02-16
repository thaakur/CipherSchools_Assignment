#include<bits/stdc++.h>
#define ll long long
int searchinsortrot(int a[],int n,int key)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=l+(h-1)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]>=a[l])
        {
            if(key<=a[mid] && key>=a[l])
                h=mid-1;
            else
                l=mid+1;
        }
        else
        {
            if(key>=a[mid] && key<=a[h])
                l=mid+1;
            else
                h=mid-1;
        }
    }
    return -1;
}
using namespace std;
int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<searchinsortrot(a,n,key);
}
