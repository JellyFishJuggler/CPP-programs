#include<bits/stdc++.h>
using namespace std;

class Node {

public:

    int val;
    Node* next;

    Node(){
        val = 0;
        next = nullptr;
    }

    Node(int val, Node* next){
        this->val = val;
        this->next = next;
    }

    int getLength(int val,  Node* head){
        Node* temp = head;
        int count = 0;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }

        return count;
    }


    Node* ArrayToLinkedList(vector<int> &nums){
        
        if(nums.empty())    return nullptr;

        Node* head = new Node(nums[0], nullptr);
        Node* temp = head; //traversing in ll

        for(int i=1; i<nums.size(); i++){
            temp->next = new Node(nums[i], nullptr);
            temp = temp->next;
        }

        return head;
    }
};


int main(){
    vector<int> nums;
    int n,val;
    cout << "Enter the number of elements : ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter the value : ";
        cin >> val;
        nums.push_back(val);
    }
    Node nd;
    Node* head = nd.ArrayToLinkedList(nums);
    int result = nd.getLength(val, head);
    cout << "**************************************************" << endl;
    cout << "The length of the linked list is : " << result << endl;
    return 0;
}