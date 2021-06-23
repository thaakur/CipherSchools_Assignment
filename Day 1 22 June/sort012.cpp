
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid=0,l=0,h=nums.size()-1;
        while(mid<=h)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[l]);
                l++;
                mid++;
            }
            else if(nums[mid]==1)
                mid++;
            else
            {
                swap(nums[mid],nums[h]);
                h--;
            }
        }
    }
};
