#include<bits/stdc++.h>
using namespace std;

int maximz(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    int prev_prev = arr[0];
    int prev = max(arr[0], arr[1]);
    int ans = prev;
    for (int i = 3; i <= n; i++)
    {
        ans = max(prev, prev_prev + arr[i - 1]);
        prev_prev = prev;
        prev = ans;
    }
    return ans;
}

void solve()
{
    int arr[] = {5, 15, 10, 100, 150};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maximz(arr, n);
}

int main(){
     striker();
}
