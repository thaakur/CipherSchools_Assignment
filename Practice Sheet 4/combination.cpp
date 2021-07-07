class Solution {
public:
    void findCombinationHelper(vector<vector<int>> &result, vector<int> &arr, int n, int left, int k){
        if(k==0)
        {
            result.push_back(arr);
            return;
        }

        for(int i=left; i<=n;i++)
        {
            arr.push_back(i);
            findCombinationHelper(result, arr, n, i+1, k-1);
            arr.pop_back();
        }
    }
    vector<vector<int>> findCombination(int n,int k){
        vector<int> arr;
        vector<vector<int>> result;
        findCombinationHelper(result, arr, n, 1, k);
        return result;
    }

};
