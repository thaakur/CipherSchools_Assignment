#include<bits/stdc++.h>
using namespace std;

int longestSub(string s, int n)
{
    int ans = 0;
    vector<int> ind(256, -1);
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int x = ind[s[i]] + 1;
        if (x > k)
            k = x;
        ans = max(ans, i - k + 1);
        ind[s[i]] = i;
    }
    return ans;
}

void solve()
{
    string s = "ABDEFGABEF";
    int n = s.size();
    cout << longestSub(s, n);
}

int main(){
     solve();
}
