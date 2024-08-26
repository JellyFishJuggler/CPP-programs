class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node *head = new Node(arr[0]);
        if(head == NULL)    return nullptr;
        
        Node *move = head;
        for(int i=1; i<arr.size(); i++){
            Node *temp = new Node(arr[i]);
            move->next = temp;
            move  = temp;
        }
        
        return head;
        
    }
};