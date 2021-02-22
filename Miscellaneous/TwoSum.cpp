#include<bits/stdc++.h>
using namespace std;

void findSum(int arr[], int n, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x = target - arr[i];
        if (mp.find(x) != mp.end())
            cout << mp[x] << " " << i;
        mp[arr[i]] = i;
    }
}

void solve()
{
    int arr[] = {2, 7, 11, 15, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 34;
    findSum(arr, n, target);
}

int main(){
     solve();
}
