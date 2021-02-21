#include<iostream>
using namespace std;
 
class Node {
    public:
        int data;
        Node *left, *right;
};
 
Node* newNode(int data){
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
 
int max(int a, int b){
    return (a > b) ? a : b; 
}
 
int height(Node* node){
    if (node == NULL)
        return 0;
    return 1 + max(height(node->left), height(node->right));
}
 
int diameter(Node* tree)
{
    if (tree == NULL)
        return 0;
 
    int lheight = height(tree->left);
    int rheight = height(tree->right);
 
    int ldiameter = diameter(tree->left);
    int rdiameter = diameter(tree->right);
 
    return max(lheight + rheight + 1, max(ldiameter, rdiameter));
}

int main()
{
 
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << diameter(root);
    return 0;
}
