/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    // void deleteNode(ListNode* node) {
    //     ListNode *deleteNode = node->next;
    //     node->val = deleteNode->val;
    //     node->next = deleteNode->next;
    //     delete deleteNode;
    // }

    ListNode* deleteMiddle(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr)    return nullptr;


        ListNode* fast = head;
        ListNode* slow = head;
        fast = head->next->next;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            // deleteNode(slow);
        }

        slow->next = slow->next->next;
        return head;
    }
};