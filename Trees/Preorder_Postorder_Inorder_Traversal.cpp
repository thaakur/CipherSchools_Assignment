#include<iostream>
using namespace std;

class Node 
{ 
    public:
        int data; 
        Node* left, *right; 
        Node(int data) 
        { 
            this->data = data; 
            left = right = NULL; 
        }
}; 

void preorderTraversal(Node* root){

    if (root == NULL) 
        return; 
    cout << root->data << " "; 
    preorderTraversal(root->left); 
    preorderTraversal(root->right); 

}

void inorderTraversal(Node* root){

    if (root == NULL) 
        return; 
    inorderTraversal(root->left); 
    cout << root->data << " "; 
    inorderTraversal(root->right); 

}

void postorderTraversal(Node* root){

    if (root == NULL) 
        return; 
    postorderTraversal(root->left); 
    postorderTraversal(root->right); 
    cout << root->data << " "; 

}

int main(){

    Node *root = new Node(10); 
    root->left = new Node(20); 
    root->right = new Node(30); 
    root->left->left = new Node(40); 
    root->left->right = new Node(50); 

    preorderTraversal(root); 
    cout<<endl;
    postirderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;

    return 0;
}
