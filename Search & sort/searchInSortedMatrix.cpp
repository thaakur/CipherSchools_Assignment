#include <bits/stdc++.h>
using namespace std;
int search(int n,int m,int a[][m], int n, int x)
{
    if (n == 0)
        return -1;
    int smallest = mat[0][0], largest = mat[n - 1][n - 1];
    if (x < smallest || x > largest)
        return -1;
    int i = 0, j = n - 1; 
    while (i < n && j >= 0) 
    {
        if (mat[i][j] == x) 
        {
            cout << "n Found at "<< i << ", " << j;
            return 1;
        }
        if (mat[i][j] > x)
            j--;
        else
            i++;
    }
    return -1;
}
int main()
{
    int n,m,key;
    cin>>n>>m>>key;
    int a[n][m];
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        cin>>a[i][j];
    
    search(n,m,a, n, key);
    return 0;
}
 
