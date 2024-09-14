#include<bits/stdc++.h>
using namespace std;

class Node {

public:

    int val;
    Node* next;

    Node(){
        this->val = 0;
        this->next = nullptr;
    }

    Node(int val, Node* next){
        this->val = val;
        this->next = next;
    }

    Node* insertAtEnd(int val, Node* head){
        //Node* nd = new Node();

        if(head == nullptr){
            head = new Node(val, nullptr);
        }
        Node* tail = head;
        //tail ko head ke sath move kra rhe hai
        //toh fir tb tk move krare hai jb tk last element ko point na krwa de
        //aur null pointer return na ho jayeee
        while(tail->next != nullptr){
            //tail ko next mei move kro jb tk null pointer na mil jaye
            tail = tail->next;
        }
        //tail ke next mei new node bna ke usmei val dal diya
        //lekin kyu? kyuki tail toh last element ko point kr rha hai
        tail->next = new Node(val, nullptr);

        //nd->val = val;
        //nd->next = nullptr;
        return head;
    }

    void display(Node *head)
    {

        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->val << endl;
            temp = temp->next;
        }
    }

};

int main(){
    vector<int>nums;
    int n;
    cout << "Enter the size of the LinkedList(array) : ";
    cin >> n;

    cout << "Enter the elements of the LinkedList(array) : ";
    int a;
    for(int i=0; i<n; i++){
        cin >> a;
        nums.push_back(a);
    }

    Node* head = nullptr;
    if(!nums.empty()){
        head = new Node(nums[0], nullptr);
        Node* tail = head;
        for(int i=1; i< nums.size(); i++){
            tail->next = new Node(nums[i], nullptr);
            tail = tail->next;
        }
    }
    
    Node nd;
    int x;
    cout << "Enter the value to be added :";
    cin >> x;
    Node* ans = nd.insertAtEnd(x, head);
    nd.display(ans);

    return 0;
}