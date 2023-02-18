// 141. Linked List Cycle

// Problem Link : https://leetcode.com/problems/linked-list-cycle/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL){
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
            }

            slow = slow -> next;

            if(slow == fast){
                return true;
            }
        }        
        return false;
    }
};