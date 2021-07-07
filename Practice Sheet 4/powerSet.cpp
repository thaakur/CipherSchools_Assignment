class Solution {
public:
    
    void powerSetHelper(vector<int> &Set, vector<vector<int>> &result, vector<int> &subSet, int index){
        result.push_back(subSet);
        for(int i = index; i< Set.size();i++)
        {
            subSet.push_back(Set[i]);
            powerSetHelper(Set, result, subSet , i+1);
            subSet.pop_back();
        }
    }

    vector<vector<int>> powerSet(vector<int> Set){
        vector<int> subset;
        vector<vector<int>> result;

        powerSetHelper(Set, result, subset,0);
        return result;
    }
};
