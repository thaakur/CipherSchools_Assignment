#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mod = 1000000007;

long long totWays(int m)
{
    if (m == 0 || m == 1)
        return m;
    long long prev_prev = 1, prev = 1, curr;
    for (int i = 2; i <= m; i++)
    {
        curr = (prev % mod + prev_prev % mod) % mod;
        prev_prev = prev;
        prev = curr;
    }
    return curr;
}

void solve()
{
    cout << totWays(3) << " " << totWays(5) << " " << totWays(10);
}

int main(){
        solve();        
}
