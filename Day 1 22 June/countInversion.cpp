class Solution{
  public:
    long long int cntandmerge(long long arr[],long long l,long long m,long long h)
    {
        long long n1=m-l+1,n2=h-m;
        long long left[n1],right[n2];
        for(int i=0;i<n1;i++)
            left[i]=arr[i+l];
        for(int i=0;i<n2;i++)
            right[i]=arr[m+i+1];
        long long res,i,j,k=l;
        res=i=j=0;
        while(i<n1 && j<n2)
        {
            if(left[i]<=right[j])
            {
                arr[k++]=left[i++];
            }
            else{
                arr[k++]=right[j++];
                res+=(n1-i);
            }
        }
        while(i<n1)
            arr[k++]=left[i++];
        while(j<n2)
            arr[k++]=right[j++];
        return res;
    }
    
    long long int inversion(long long arr[],long long l,long long h)
    {
        long long int res=0;
        if(l<h)
        {
            long long m=l+(h-l)/2;
            res+=inversion(arr,l,m);
            res+=inversion(arr,m+1,h);
            res+=cntandmerge(arr,l,m,h);
        }
        return res;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long int ans=inversion(arr,0,N-1);
        return ans;
        // Your Code Here
    }
};
