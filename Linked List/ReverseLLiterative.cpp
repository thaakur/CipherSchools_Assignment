#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};
void reverse(Node* head){
    Node* current = head;
    Node* prev = NULL, *next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }    
    head = prev;

    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){

    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    reverse(head);
    
    return 0;
}
