
class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int i=-1,j=n;
        while(1)
        {
            do{
                i++;
            }while(arr[i]==0);
            do{
                j--;
            }while(arr[j]==1);
            if(i>j)
                return;
            swap(arr[i],arr[j]);
        }
    }
};
