
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int l=0,h=n-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
                return mid;
            else if(mid>0 && arr[mid-1]>=arr[mid])
                h=mid-1;
            else 
                l=mid+1;
        }
        return -1;
       // Your code here
    }
};
