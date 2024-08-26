// insert at beginning node
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
    // pointing to the first node element
public:
    Node *head;
    // Constructor which inializes the head to NULL
    LinkedList() : head(NULL) {}

    int get(int value){
        Node* temp = head;
        for(int i=0; i<value && temp != NULL; i++){
            temp = temp->next;
        }
        if(temp == NULL)    return -1;
        return temp->data;
    }

    void insertAtbeginning(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

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

    void insertAtPosition(int value, int index){
        Node* newNode = new Node();
        //index chec kiya (1 se km nh hona chahiye)
        if(index <= 1){
            cout << "index should be greater than 1" << endl;
        }
        //agr 1 hai toh mtlb starting me insert krna h
        if(index == 1){
            insertAtbeginning(value);
            return;
        }
        newNode->data = value;

        Node* temp = head;
        for(int i=1; i< index - 1; i++){
            temp = temp->next;
        }
        //agr index he out of bonds ho
        if(!temp){
            cout << "Out of Range." << endl;
            delete newNode;
            return;
        }
        //newNode ke pointer to current node ke pointer se update krre h
        newNode->next = temp->next;
        //current node ke pointer ko fir newNode se update krdo
        temp->next = newNode;
    }

    void deleteFromBeginning(){
        Node* newNode = new Node();
        if(head != NULL){
            cout<<"LinkedList is empty" << endl;
        }   
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd(){
        Node* newNode = new Node();
        if(head == NULL){
            cout << "LinkedList is empty" << endl;
            return;
        }
        if(!head->next){
            delete head;
            head->next = NULL;
        }
        Node* temp = head;
        while(temp->next->next){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    void deleteFromPosition(int index){
        if(index <= 1){
            cout << "Index should be greater than 1";
            return;
        }
        if(index == 1){
            deleteFromBeginning();
            return;
        }
        Node* temp = head;
        for(int i=1; i<index-1 && temp != NULL; i++){
            temp = temp->next;
        }
        if(temp==NULL || temp->next == NULL){
            cout << "Out of bounds" << endl;
            return;
        }
        Node* newNode = temp->next;
        temp->next = temp->next->next;
        delete newNode;
    }

    void display(Node *head)
    {

        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList list;
    list.insertAtbeginning(5);
    list.insertAtbeginning(10);
    list.insertAtbeginning(15);
    cout << "Insert At Beginning : 5 10 15 :: " << endl;
    list.display(list.head);
    list.insertFromEnd(20);
    cout << "Insert At End : 20 ::" << endl;
    list.display(list.head);
    list.insertAtPosition(3,2);
    cout << "Insert at Position ::" << endl;
    list.display(list.head);
    cout << "Delete from beginning ::" << endl;
    list.deleteFromBeginning();
    list.display(list.head);
    cout << "Delete from end ::" << endl;
    list.deleteFromEnd();
    list.display(list.head);
    cout << "Delete from Index ::" << endl;
    list.deleteFromPosition(3);
    list.display(list.head);
    return 0;
}