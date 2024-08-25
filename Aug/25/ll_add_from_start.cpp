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

    void insertAtbeginning(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
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
    list.display(list.head);
    return 0;
}