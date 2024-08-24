#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        //constructor
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
//insert at the head of the linked list
void insertAthead(Node* &head, int d){
    
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAttail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

//print the linked list
void print(Node* head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
        
}

int main(){
    //Created a new node
    Node* node1 = new Node(10);
    
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertAttail(tail, 20);
    insertAttail(tail, 30);
    print(head);

    
    return 0;
}