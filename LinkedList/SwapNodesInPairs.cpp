// 24. Swap Nodes in Pairs

// https://leetcode.com/problems/swap-nodes-in-pairs/description/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL){
            return NULL;
        }        

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;

        int count = 0;

        while(curr != NULL && count < 2){
            forward = curr -> next;
            curr -> next = prev;

            prev = curr;
            curr = forward;
            count++;
        }

        if(forward != NULL){
            head -> next = swapPairs(forward);
        }

        return prev;
    }
};