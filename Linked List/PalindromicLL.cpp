#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
bool isPalindrome(Node *head)
{
    Node* slow= head; 
    stack <int> s; 
    while(slow != NULL)
    { 
        s.push(slow->data); 
        slow = slow->next; 
    } 

    while(head != NULL )
    { 
        int i=s.top(); 
        s.pop(); 
        if(head -> data != i)
        { 
            return false; 
        } 
        head=head->next; 
    } 
    return true; 
}
int main()
{
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
}
