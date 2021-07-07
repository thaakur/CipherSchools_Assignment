
class Solution {
public:
    int searchInRotated(vector<int> arr, int key){
        int beg = 0, last = arr.size();
        while(beg<=last){
            int mid = beg + (last - beg) / 2;
            if(arr[mid] == key){
                return mid;
            }
            if(arr[beg]<arr[mid]){
                if(key>=arr[beg] && key<arr[mid]){
                    last = mid - 1;
                }
                else
                    beg = mid + 1;
            }
            else{
                if(key>arr[mid] && key<arr[last]){
                    beg = mid + 1;
                }
                else{
                    last = mid - 1;
                }
            }
        }
        return -1;
    }
};
