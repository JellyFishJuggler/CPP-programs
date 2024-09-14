/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // making a map to check the track of elements of the node. agr koi repeat hua to count badega uska and loop mil jayegi waha
        unordered_map<ListNode*,int>mpp;
        ListNode* temp = head;

        while(temp){
            // if the element is already present in the map then return true
            if(mpp.find(temp) != mpp.end()){
                return true;
            }
            //else add krlo element ko :)
            mpp[temp] = 1;
            temp = temp->next;
        }

        return false;
    }
};

/* ************************************************************************ */

// slow and fast algo use krke 


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;

            //yeh dono tbhi equal honge jb loop detect hogi
            if(slow == fast){
                //aur agr aisa hai to slow ko head se start krdo
            
                slow = head;
                while(slow != fast){
                    //ab jb ye dono milenge tb return true krdo -> slow ko ya fast ko return krdo dono same honge
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }

        return NULL;
    }
};