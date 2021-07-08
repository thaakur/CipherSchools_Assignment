class Solution {
public:
    vector<int> SlidingWindowMax(vector<int> window, int k){
        deque<int> dq;
        int i=0;
        for(;i<k;i++)
        {
            while(!dq.empty() && window[dq.back()]<= window[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        vector<int> result;
            while(i<window.size())
            {
                result.push_back(window[dq.front()]);
                while(!dq.empty() && dq.front() <= i-k ){
                    dq.pop_front();
                }
                while(!dq.empty() && window[dq.back()]<= window[i]){
                dq.pop_back();
                }
                dq.push_back(i);
                i++;
            }
            result.push_back(window[dq.front()]);
        return result;
    }

};
