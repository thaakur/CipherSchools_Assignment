#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root -> data < n1 && root -> data < n2)
        return LCA(root -> right, n1, n2);
    else if (root -> data > n1 && root -> data > n2)
        return LCA(root -> left, n1, n2);
    return root;
}

void solve()
{
    Node *root = new Node(20);  
    root -> left = new Node(8);  
    root -> right = new Node(22);  
    root -> left -> left = new Node(4);  
    root -> left -> right = new Node(12);  
    root -> left -> right -> left = new Node(10);  
    root -> left -> right -> right = new Node(14);
    int n1, n2;
    n1 = 10, n2 = 4;
    Node *ans = LCA(root, n1, n2);
    cout << ans -> data << endl;
    n1 = 8, n2 = 22;
    ans = LCA(root, n1, n2);
    cout << ans -> data << endl;
}

int main(){
        solve();
}
