
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1;
        int n=nums.size();
        int maj=nums[0];
        for(int i=1;i<n;i++)
        {
            if(maj==nums[i])
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
            if(cnt==0){
                cnt++;
                maj=nums[i]; 
            }
        }
        return maj;
    }
};
