class Solution {
  public:
    
    Node* reverse(Node* head){
        Node* curr;
        Node* front;
        Node* prev = nullptr;
        
        while(curr != nullptr){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        
        return prev;
    }  

  
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        head = reverse(head);
        Node* temp = head;
        int carry = 1;
        while(temp != nullptr){
            temp->data += 1;
            if(temp->data < 10){
                carry = 0;
                break;
            }
            else{
                carry = 1;
                temp->data = 0;
            }
            temp = temp->next;
        }
        
        if(carry == 1){
            Node* newNode = new Node(1);
            head = reverse(head);
            newNode->next = head;
            return newNode;
        }
        head = reverse(head);
        return head;
    }
};