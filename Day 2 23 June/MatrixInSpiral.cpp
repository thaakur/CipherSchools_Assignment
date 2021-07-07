
class Solution {
public:
    void printSpiral(vector<vector<int>> matrix){
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = n - 1, top = 0, bottom = m - 1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                cout<<matrix[top][i]<<" ";
            }
            top++;
            for(int i=top;i<=bottom;i++){
                cout<<matrix[i][right]<<" ";
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    cout<<matrix[bottom][i]<<" ";
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    cout<<matrix[i][left]<<" ";
                }
                left++;
            }
        }
    }

};
