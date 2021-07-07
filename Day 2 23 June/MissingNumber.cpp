
class Solution {
public:
    int findMissing(vector<int> &arr){
        int size = arr.size();
        int sum = (size + 1) * (size + 2) / 2;
        for(int i : arr){
            sum -= i;
        }
        return sum;
    }
};
