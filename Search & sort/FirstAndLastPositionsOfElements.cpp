#include<bits/stdc++.h>
using namespace std;
int firstocciter(int a[],int n,int x)
{
  int l=0,h=n-1;
  while(l<=h)
  {
    int mid=l+(h-l)/2;
    if(a[mid]>x)
      h=mid-1;
    else if(a[mid]<x)
      l=mid+1;
    else
    {
      if(mid==0 || a[mid]!=a[mid-1])
        return mid;
      else
        h=mid-1;
    }
  }
  return -1;
}
int lastocciter(int a[],int n,int x)
{
  int l=0,h=n-1;
  while(l<=h)
  {
    int mid=l+(h-l)/2;
    if(a[mid]>x)
      h=mid-1;
    else if(a[mid]<x)
      l=mid+1;
    else
    {
      if(mid==n-1 || a[mid]!=a[mid+1])
        return mid;
      else
        l=mid+1;
    }
  }
  return -1;
}
int main()
{
  int n,x;
  cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<firstocciter(a,n,x)<<" "<<lastocciter(a,n,x);
}
