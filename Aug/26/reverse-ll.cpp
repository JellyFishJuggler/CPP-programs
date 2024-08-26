#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Reverse {
public:
    Node *head;
    Reverse() : head(NULL) {}

    Node* reverseList(Node* list){
        Node *prev = nullptr, *curr = head, *next = nullptr;
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return prev;
    } 

    void display(Node *list){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void insertAtbeginning(int value){

        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
};

int main(){
    Reverse rev;
    rev.insertAtbeginning(1);
    rev.insertAtbeginning(2);
    rev.insertAtbeginning(3);
    rev.insertAtbeginning(4);
    rev.insertAtbeginning(5);
    rev.display(rev.head);
    rev.reverseList(rev.head);
    rev.display(rev.head);
    return 0;
}