#include<bits/stdc++.h>
using namespace std;

int getMissingNo(int a[], int n)
{
    int x1 = a[0];
    int x2 = 1;
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
    return (x1 ^ x2);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    cout << getMissingNo(a,n);
    return 0;
}
