#include<bits/stdc++.h>
using namespace std;
bool evermeetnaive(int d1,int v1,int d2,int v2)
{
    if(d1<d2 && v1<=v2)
        return false;
    if(d1>d2 && v1>=v2)
        return false;
    if(d1<d2){
        swap(d1,d2);
        swap(v1,v2);
    }
    while(d1>=d2)
    {
        if(d1==d2)
            return true;
        d1+=v1;
        d2+=v2;
    }
    return false;
}
bool evermeeteff(int d1,int v1,int d2,int v2)
{
    if(d1<d2 && v1<=v2)
        return false;
    if(d1>d2 && v1>=v2)
        return false;
    if(d1<d2){
        swap(d1,d2);
        swap(v1,v2);
    }
    return ((d1-d2)%(v1-v2)==0);
}

int main()
{
    int d1,d2,v1,v2;
    cin>>d1>>d2>>v1>>v2;
    if(evermeeteff(d1,v1,d2,v2))
        cout<<"Meets";
    else
        cout<<"Does not meet";
}
