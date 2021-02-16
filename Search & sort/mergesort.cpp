#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int b[n1];
    int c[n2];
    for(int i=0;i<n1;i++)
        b[i]=a[l+i];
    for(int j=0;j<n2;j++)
        c[j]=a[m+1+j];
    int i=0,j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(b[i]<=c[j])
            a[k]=b[i++];
        else
            a[k]=c[j++];
        k++;
    }
    while(i<n1)
        a[k++]=b[i++];
    while(j<n2)
        a[k++]=c[j++];
}
void mergesort(int a[],int l,int r)
{
    if(r>l)
    {
        int mid=l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}
int main()
{
    int a[]={7,2,9,6,1};
    int l=0,r=5;
    mergesort(a,l,r);
    int a_size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<a_size;i++)
        cout<<a[i]<<" ";
}
