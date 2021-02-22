#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void rangeQ(Node *root, int l, int r)
{
    if (root == NULL)
        return;
    if (root -> data > l)
        rangeQ(root -> left, l, r);
    if (root -> data >= l && root -> data <= r)
        cout << root -> data << " ";
    if (root -> data < r)
        rangeQ(root -> right, l, r);
}
void solve()
{
    Node *root = new Node(30); 
    root -> left = new Node(18); 
    root -> right = new Node(32); 
    root -> left -> left = new Node(14); 
    root -> left -> right = new Node(22);
    int l, r;
    l = 20, r = 35;
    rangeQ(root, l, r);
}

int main()
{
        solve();
}
