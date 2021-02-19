#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
};

void insertNode(Node* head, int data)
{
    Node* temp = head;
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    while(temp->next != NULL){
        temp = temp->next;
    } 
    temp->next = newNode;
    newNode->prev = temp;
}

void printListForward(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

void deleteNode(Node* head){
    Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }

    temp->next = NULL;
}

int main()
{ 
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->prev = NULL;
    head->next = second;

    second->prev = head;
    second->data = 2;
    second->next = third;

    third->prev = second;
    third->data = 3;
    third->next = NULL;

    printListForward(head);

    insertNode(head, 4);
    insertNode(head, 5);
    insertNode(head, 6);

    cout << "\n";

    printListForward(head);

    deleteNode(head);

    cout << "\n";

    printListForward(head);
}
