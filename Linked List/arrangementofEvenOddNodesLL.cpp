#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data = data;
        next=NULL;
    }
};
void printLinkedList(Node* head)
{
    if(head == NULL)
        return;      
    cout<<head->data<<"->";
    return printLinkedList(head->next);
}
int main()
{
    Node * head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    
    cout<<"Before Arranging Even Odd Nodes :-"<<endl;
    printLinkedList(head);
    cout<<endl;
    cout<<"After Arranging Even Odd nodes :-"<<endl;
    
    Node* curr=head;
    Node* curr_next = curr->next;
    Node* curr_next_ptr = curr->next;
    
    while(curr_next->next!=NULL)
    {
        curr->next = curr_next->next;
        curr=curr->next;
        curr_next->next = curr->next;
        curr_next = curr_next->next;
    }
    curr->next = curr_next_ptr;  
    printLinkedList(head);
    cout<<endl;
}
