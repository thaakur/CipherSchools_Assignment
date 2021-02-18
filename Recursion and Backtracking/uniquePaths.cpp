#include<bits/stdc++.h>
using namespace std;
int backtracking(int r, int c, int m, int n) {
            if(r==m && c==n) return 1;
            if(r>m || c>n) return 0;
            return backtracking(r+1, c, m, n) + backtracking(r, c+1, m, n);
        }

int uniquePaths(int m, int n) {
            return backtracking(1, 1, m, n);
        }

int main()
{
    int n,m;
    cin>>m>>n;
    cout<<uniquePaths(m,n);
}
