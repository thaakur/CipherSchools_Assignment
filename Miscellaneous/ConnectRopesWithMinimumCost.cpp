#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void connect(int arr[], int n)
{
    priority_queue<int, vector<int>,greater<int>> p(arr, arr + n);
    int ans = 0;
    while (p.size() >= 2)
    {
        int f = p.top();
        p.pop();
        int s = p.top();
        p.pop();
        ans = ans + f + s;
        p.push(f + s);
    }
    cout << ans;
}

void solve()
{
    int arr[] = {4, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    connect(arr, n);
}

int main(){
        solve();
}
