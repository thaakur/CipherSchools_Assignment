class Solution {
public:
    int circularTour(vector<petrolPump> arr) 
    { 
        int start = 0; 
        int extraPetrol=0;
        int less = 0;
        int n= arr.size();

        for(int i = 0; i<n; i++){
            extraPetrol += arr[i].petrol - arr[i].distance;
            if(extraPetrol < 0){
                start = i+1;
                less = less + abs(extraPetrol);
                extraPetrol = 0;
            }
        }

        if(extraPetrol-less>=0){
            return start;
        }
        else{
            return -1;
        }
    } 

};
