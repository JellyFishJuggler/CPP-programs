#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Linkedlist{

public:
    Node* head;
    Linkedlist() : head(NULL) {}

    void insertFromEnd(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(!head){
            head = newNode;
            return;
        }
        Node* temp = head;
        
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newNode;
    }

};

int main(){
    return 0;
}