// 142. Linked List Cycle II

// Problem Link : https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL){
            return NULL;
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
                slow = head;

                while(slow != fast){
                    slow = slow -> next;
                    fast = fast -> next;
                }
                return slow;
            }
        }        
        return NULL;        
    }
};