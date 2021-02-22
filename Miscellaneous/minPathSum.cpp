#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int mat[3][3] = {{1,2,3},{4,8,2},{1,5,3}};
    int m = 3;
    int n = 3; 
    for (int i = 1; i < n; i++)
    	mat[0][i] += mat[0][i - 1];
    
    for (int i = 1; i < m; i++)
    	mat[i][0] += mat[i-1][0];

    for (int i = 1; i < m; i++)
    { 
        for (int j = 1; j < n; j++)
        {
            mat[i][j] += min(mat[i-1][j], mat[i][j-1]);
        }
    }
    cout << mat[m - 1][n - 1];
}

int main(){
    solve();
}
