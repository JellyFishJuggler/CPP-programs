#include<bits/stdc++.h>
using namespace std;

class Node {

public:

    int data;
    Node* next;
    //defualt constructor
    Node() {
        this->data = 0;
        this->next = nullptr;
    }
    //parameterized constructor
    Node(int data, Node* next = NULL){
        this->data = data;
        this->next = nullptr;
    }

    // Node(){
    //     Node* head;
    // }

    Node* ArrayToLinkedList(vector<int>nums){

        Node* head = new Node(nums[0], nullptr);

       //if(head == nullptr) return nullptr;

        Node* move = head;

        if(head == nullptr) return NULL;
        for(int i=1; i<nums.size(); i++){

            Node* temp = new Node(nums[i], nullptr);
            //hm basically move ko temp ki val pe point kara rhe hai
            move->next = temp;
            //move ko temp mei point kara diya val and address dono move ho gye
            move = temp; 
        }

        return head;
    }

};



int main(){
    vector<int>nums;
    int n, val;

    cout << "Enter the value of n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> val;
        nums.push_back(val);
    }

    Node nd;
    Node* ans = nd.ArrayToLinkedList(nums);
    while(ans){
        cout << ans->data << " ";
        ans = ans->next;
    }
    cout << "\n";
    
    return 0;
}