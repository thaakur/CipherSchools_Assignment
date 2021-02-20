#include <iostream> 
#include <stack> 
using namespace std; 
void printPrevSmaller(int arr[], int n) 
{ 
    stack<int> S; 
    for (int i=0; i<n; i++) 
    { 
        while (!S.empty() && S.top() >= arr[i]) 
            S.pop(); 
        if (S.empty()) 
            cout << "_, "; 
        else  
            cout << S.top() << ", "; 
        S.push(arr[i]); 
    } 
} 
int main() 
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    printPrevSmaller(a, n); 
    return 0; 
} 
