#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

int minjump(int arr[], int n)
{
    if (n <= 1)
        return 0;
    if (arr[0] == 0)
        return -1;
    int maxR = arr[0], step = arr[0], jump = 1;          
    
    for (int i = 1; i < n; i++)
    {
        
        if (i == n - 1)
            return jump;
        maxR = max(maxR, i + arr[i]);
        step--;
        if (step == 0)
        {
            ++jump;
            if (i >= maxR)
                return -1;
            step = maxR - i;
        }
    }
    return -1;
}

void solve()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minjump(arr, n);
}

int main(){
   solve();
}
