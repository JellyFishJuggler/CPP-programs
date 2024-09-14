#include <bits/stdc++.h>
using namespace std;

class Node
{

public:

    int val;
    Node *next;

    Node()
    {
        val = 0;
        next = nullptr;
    }

    Node(int val, Node *head)
    {
        this->next = head;
        this->val = val;
    }


    bool search(Node* head, int key, int val){

        Node* temp = head;
        while(temp){
            if(temp->val == key){
                return true;
            }

            temp = temp->next;
        }

        return false;
    }

    Node* ArrayToLinkedList(vector<int> &nums){
        
        Node* head = new Node(nums[0], nullptr);
        if(nums.empty())    return nullptr;

        Node* temp = head;

        for(int i=1; i< nums.size(); i++){
            temp->next = new Node(nums[i], nullptr);
            temp = temp->next;
        }


        return head;
    }
};

int main()
{
    vector<int> nums;
    int n, val;
    cout << "Enter the number of elements : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value : ";
        cin >> val;
        nums.push_back(val);
    }
    Node nd;
    Node *head = nd.ArrayToLinkedList(nums);
    int key;
    cout << "Enter the key to search : ";
    cin >> key;

    bool result = nd.search(head, key, val);
    if(result){
        cout << "Element Found!" << endl;
    }
    else{
        cout << "Element not found!" << endl;
    }

    return 0;
}