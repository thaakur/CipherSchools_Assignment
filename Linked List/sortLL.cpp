#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push(Node* head, int data){

    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* temp){
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void MergeSorted(Node* head){
    Node* current = head;
    Node* index = NULL;
    int temp;

    if(head == NULL){
        return;
    }
    else
    {
        while(current != NULL)
        {
            index = current->next;
            while(index != NULL) {
                if(current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

int main(){

    Node* a = new Node();

    a->data = 5;
    a->next = NULL;

    push(a, 10);
    push(a, 2);
    push(a, 20);

    printList(a);
    MergeSorted(a);

    printList(a);
}
