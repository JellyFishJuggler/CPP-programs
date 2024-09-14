#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node()
    {
        this->val = 0;
        this->next = nullptr;
    }

    Node(int val, Node *next = nullptr)
    {
        this->val = val;
        this->next = next;
    }

    // Function to delete a node by value
    Node* deleteNode(Node *head, int key)
    {
        if (head == nullptr)
        {
            cout << "List is empty!" << endl;
            return head;
        }

        // If head node itself holds the key to be deleted
        if (head->val == key)
        {
            Node *temp = head;
            head = head->next;  // Move head to the next node
            delete temp;  // Free memory of the old head
            return head;
        }

        // Search for the node to be deleted, keep track of the previous node
        Node *curr = head;
        Node *prev = nullptr;

        while (curr != nullptr && curr->val != key)
        {
            prev = curr;
            curr = curr->next;
        }

        // If the key was not present in the linked list
        if (curr == nullptr)
        {
            cout << "Key not found!" << endl;
            return head;
        }

        // Unlink the node from the linked list and free its memory
        prev->next = curr->next;
        delete curr;

        return head;
    }

    // Function to display the linked list
    void display(Node *head)
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to create a linked list from a vector
    Node* ArrayToLinkedList(vector<int>& nums)
    {
        if (nums.empty()) return nullptr;

        Node *head = new Node(nums[0]);
        Node *move = head;

        for (int i = 1; i < nums.size(); i++)
        {
            move->next = new Node(nums[i]);
            move = move->next;
        }

        return head;
    }
};

int main()
{
    vector<int> nums;
    int n, val;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the values: ";
        cin >> val;
        nums.push_back(val);
    }

    Node nd;
    Node *head = nd.ArrayToLinkedList(nums);  // Create the linked list from the array

    int del;
    cout << "Enter the value to delete: ";
    cin >> del;

    // Perform the deletion and update the head pointer
    head = nd.deleteNode(head, del);

    // Display the linked list after deletion
    cout << "Linked list after deletion: ";
    nd.display(head);

    return 0;
}
