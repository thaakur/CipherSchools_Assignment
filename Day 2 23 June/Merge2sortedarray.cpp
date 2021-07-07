
class Solution {
public:
    void mergeArr(const vector<int> &arr1,const vector<int> &arr2){
        vector<int> res(arr1.size()+arr2.size());
        int i = 0, j = 0, k = 0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]<=arr2[j]){
                res[k] = arr1[i];
                i++;
            }
            else{
                res[k] = arr2[j];
                j++;
            }
            k++;
        }
        while(i<arr1.size()){
            res[k] = arr1[i];
            i++;
            k++;
        }
        while(j<arr2.size()){
            res[k] = arr2[j];
            j++;
            k++;
        }
        for(int i=0;i<arr1.size()+arr2.size();i++){
            cout<<res[i]<<" ";
        }
    }
};
