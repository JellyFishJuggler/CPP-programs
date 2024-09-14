class Solution {
  public:
  
    int lengthLoop(Node* slow, Node* fast){
        fast = fast-> next;
        int count = 1;
        
        while(slow != fast){
            count++;
            fast = fast->next;
        }
        
        return count;
    }
  
  
  
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slow = head;
        Node* fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return lengthLoop(slow,fast);
            }
        }
        
        return 0;
    }
};