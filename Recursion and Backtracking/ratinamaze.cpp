#include <bits/stdc++.h>
using namespace std;
#define MAX 5

vector<string> printPath(int m[MAX][MAX], int n);

int main() {
        int n;
        cin >> n;

        int m[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }

        vector<string> result = printPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
}
void mazePath(int i,int j,int m[MAX][MAX],int n,string s,vector<string >&  result){

    if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0 ){
        return;
    }
    else if(i == n-1 && j == n-1){
        result.push_back(s);
        return;
    }
    else{
        m[i][j]=0;
        mazePath(i+1,j,m,n,s +'D',result);
        mazePath(i-1,j,m,n,s +'U',result);
        mazePath(i,j+1,m,n,s +'R',result);
        mazePath(i,j-1,m,n,s +'L',result);
        m[i][j]=1;
    }
}
vector<string> printPath(int m[MAX][MAX], int n) {
    vector<string > result;
    mazePath(0,0,m,n,"",result);
    sort(result.begin(),result.end());

   return result;
}
