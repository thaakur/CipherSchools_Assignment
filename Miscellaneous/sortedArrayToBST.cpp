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

Node *makeTree(int st, int en, int arr[])
{
	if (st > en)
		return NULL;
	int mid = (st + en) / 2;
	Node *head = new Node(arr[mid]);
	head -> left = makeTree(st, mid - 1, arr);
	head -> right = makeTree(mid + 1, en, arr);
	return head;
}

void inord(Node *head)
{
	if (head == NULL)
		return;
	inord(head -> left);
	cout << head -> data << " ";
	inord(head -> right);
}

void solve()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *head = makeTree(0, n - 1, arr);
    inord(head);
}

int main(){
     solve();
}
