#include<bits/stdc++.h>
using namespace std;
int fib(int n,int a=0,int b=1)
{
  if(n==0)
    return a;
  if(n==1)
    return b;
  return fib(n-1,b,a+b);
}
int factTailRec(int n,int a)
{
  if(n==0)
    return a;
  return factTailRec(n-1,n*a);
}
int fact(int n)
{
  return factTailRec(n,1);
}
    
int main()
{
  int x;
  cin>>x;
  cout<<fib(9);
  cout<<fact(5);
}
  
