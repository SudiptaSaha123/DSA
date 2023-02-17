// 206. Reverse Linked List

// Problem Link : https://leetcode.com/problems/reverse-linked-list/description/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }  

        ListNode* prev = NULL;
        ListNode* curr = head;

        ListNode* forward = NULL;

        while(curr != NULL){
            forward = curr -> next;
            curr -> next = prev;

            prev = curr;
            curr = forward;
        }     
        return prev;
    }
};