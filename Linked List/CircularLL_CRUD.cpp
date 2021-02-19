#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};
void printList(Node* temp){
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertNode(Node* head, int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void deleteNode(Node* head)
{
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
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

    insertNode(head, 4);
    printList(head);
    deleteNode(head);
    printList(head);
}
