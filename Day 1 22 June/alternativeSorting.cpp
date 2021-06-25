class Solution{
	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    vector<int> v;
	    sort(arr,arr+N);
	    for(int i=0,j=N-1;i<=j;i++,j--)
	    {
	        if(i!=j)
	            v.push_back(arr[j]);
	        v.push_back(arr[i]);
	    }
	    return v;
	    // Your code goes here
	}

};
